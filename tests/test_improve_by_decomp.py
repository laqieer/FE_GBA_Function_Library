import unittest
from pathlib import Path
from tempfile import TemporaryDirectory
from unittest.mock import patch

from improve_by_decomp import (
    INFILES,
    MULTISYM_COLUMN,
    extract_declaration,
    index_preamble,
    is_placeholder_name,
    multisym_address,
    normalize_address,
    parse_symbol_line,
    primary_symbol,
    read_decomp,
    read_multisym,
    render_index,
    resolve_function_rows,
    source_filename,
)


class PrimarySymbolTests(unittest.TestCase):
    def test_prefers_symbol_matching_declaration(self):
        boundary = {
            'name': 'ArmCodeEnd',
            'decl': 'void AgbMain(void)',
            'type': 'T',
        }
        function = {
            'name': 'AgbMain',
            'decl': 'void AgbMain(void)',
            'type': 'T',
        }

        self.assertIs(primary_symbol([boundary, function]), function)

    def test_prefers_non_placeholder_assembly_symbol(self):
        function = {'name': 'Init', 'decl': 'b crt0', 'type': 'T'}
        marker = {'name': '__rom_start', 'decl': 'b crt0', 'type': 'T'}

        self.assertIs(primary_symbol([marker, function]), function)

    def test_recognizes_declaration_with_space_before_parenthesis(self):
        fallback = {
            'name': 'Fallback',
            'decl': 'void Other(void)',
            'type': 'T',
        }
        spaced = {
            'name': 'Spaced',
            'decl': 'void Spaced (void)',
            'type': 'T',
        }

        self.assertIs(primary_symbol([fallback, spaced]), spaced)

    def test_recognizes_address_derived_placeholder_classes(self):
        for name in (
            'func_fe6_0808B7A0',
            'sub_800FAD0',
            'FUN_08012345',
            'Unknown_08012345',
            'LAB_08012345',
            'thunk_FUN_08012345',
            'nullsub_5',
            '.gcc2_compiled._28',
        ):
            with self.subTest(name=name):
                self.assertTrue(is_placeholder_name(name))
        self.assertFalse(is_placeholder_name('StartEndingTurnRecordScreen'))


class DeclarationTests(unittest.TestCase):
    def test_collects_multiline_prototype_from_a_continuation_line(self):
        with TemporaryDirectory() as directory:
            source = Path(directory) / 'function.c'
            source.write_text(
                'int GetUnitDefinitionFormEventScr(\n'
                '    struct UnitDefinition * source, short count,\n'
                '    u8 arg2, s8 arg3, s8 arg4)\n'
                '{\n'
                '    return 0;\n'
                '}\n'
            )
            symbol = {
                'filename': str(source),
                'linenum': 3,
                'name': 'GetUnitDefinitionFormEventScr',
            }

            parsed = extract_declaration(symbol)

        self.assertEqual(parsed['linenum'], 1)
        self.assertEqual(
            parsed['decl'],
            'int GetUnitDefinitionFormEventScr( '
            'struct UnitDefinition * source, short count, '
            'u8 arg2, s8 arg3, s8 arg4)',
        )
        self.assertEqual(parsed['decl'].count('('), parsed['decl'].count(')'))

    def test_rejects_unbalanced_multiline_prototype(self):
        with TemporaryDirectory() as directory:
            source = Path(directory) / 'function.c'
            source.write_text(
                'int BrokenFunction(\n'
                '    int arg0,\n'
                '    int arg1\n'
            )
            symbol = {
                'filename': str(source),
                'linenum': 3,
                'name': 'BrokenFunction',
            }

            with self.assertRaisesRegex(ValueError, 'unbalanced declaration'):
                extract_declaration(symbol)


class GeneratedSourceFallbackTests(unittest.TestCase):
    def _source_root(self, directory):
        source_root = Path(directory)
        template = source_root / 'src/data/chapter_settings.json.txt'
        template.parent.mkdir(parents=True)
        template.write_text(
            '{{ generated file header }}\n'
            '\n'
            'struct ROMChapterData CONST_DATA gChapterDataTable[] =\n'
            '{\n'
            '};\n'
        )
        return source_root, template

    @staticmethod
    def _symbol(filename):
        return {
            'name': 'gChapterDataTable',
            'address': '088b0890',
            'type': 'T',
            'filename': filename,
            'linenum': 6,
            'infile': 'fireemblem8u.txt',
        }

    def test_ci_source_root_fallback_is_deterministic(self):
        with TemporaryDirectory() as directory:
            source_root, template = self._source_root(directory)
            symbol = self._symbol(
                '/home/ci/fireemblem8u/./src/data/chapter_settings.h'
            )
            with patch.dict(
                'os.environ',
                {'FE8U_SOURCE_ROOT': str(source_root)},
            ):
                first = extract_declaration(symbol)
                second = extract_declaration(symbol)

            self.assertEqual(first, second)
            self.assertEqual(first['filename'], str(template))
            self.assertEqual(first['linenum'], 3)
            self.assertEqual(
                first['decl'],
                'struct ROMChapterData CONST_DATA gChapterDataTable[] =',
            )

    def test_generated_header_maps_to_tracked_template(self):
        with TemporaryDirectory() as directory:
            source_root, template = self._source_root(directory)
            generated = source_root / 'src/data/chapter_settings.h'
            generated.write_text(
                'struct ROMChapterData gChapterDataTable[] = {};\n'
            )
            symbol = self._symbol(str(generated))
            with patch.dict(
                'os.environ',
                {'FE8U_SOURCE_ROOT': ''},
            ):
                self.assertEqual(source_filename(symbol), template)

    def test_unknown_missing_generated_source_still_raises(self):
        with TemporaryDirectory() as directory:
            source_root = Path(directory)
            (source_root / 'src/data').mkdir(parents=True)
            symbol = self._symbol(
                '/home/ci/fireemblem8u/src/data/unknown_generated.h'
            )
            with patch.dict(
                'os.environ',
                {'FE8U_SOURCE_ROOT': str(source_root)},
            ):
                with self.assertRaisesRegex(
                    ValueError,
                    'does not exist beneath',
                ):
                    source_filename(symbol)


class AddressTests(unittest.TestCase):
    def test_rejects_out_of_range_before_thumb_normalization(self):
        with self.assertRaisesRegex(ValueError, 'out-of-range'):
            normalize_address('18000001', 'synthetic', rom_only=True, thumb=True)

    def test_normalizes_only_valid_rom_thumb_pointer(self):
        self.assertEqual(
            normalize_address('08000001', 'synthetic', rom_only=True, thumb=True),
            '8000000',
        )
        self.assertEqual(
            normalize_address('04000063', 'synthetic', thumb=True),
            '4000063',
        )

    def test_multisym_merges_collisions_without_losing_aliases(self):
        with TemporaryDirectory() as directory:
            path = Path(directory) / 'multisym.txt'
            path.write_text(
                '08000000 First, Shared\n'
                '08000001 Second, Shared\n'
                '04000063 ByteRegister\n'
            )

            symbols = read_multisym(path)

        self.assertEqual(
            symbols['8000000'],
            ['First', 'Shared', 'Second'],
        )
        self.assertEqual(symbols['4000063'], ['ByteRegister'])

    def test_multisym_rejects_invalid_address_instead_of_wrapping(self):
        with TemporaryDirectory() as directory:
            path = Path(directory) / 'multisym.txt'
            path.write_text('18000001 Invalid\n')
            with self.assertRaisesRegex(ValueError, 'out-of-range'):
                read_multisym(path)

    def test_decomp_symbol_rejects_invalid_rom_address_before_normalizing(self):
        with self.assertRaisesRegex(ValueError, 'out-of-range GBA ROM address'):
            parse_symbol_line(
                '18000001 T Invalid /src/invalid.c:1',
                'fe6.txt',
                1,
            )


class DecompAliasTests(unittest.TestCase):
    def test_same_address_globals_are_preserved_as_explicit_ambiguous_aliases(self):
        with TemporaryDirectory() as directory:
            source = Path(directory) / 'functions.c'
            source.write_text(
                'void FirstName (void);\n'
                'void SecondName(void);\n'
            )
            symbols = Path(directory) / 'symbols.txt'
            symbols.write_text(
                f'08001001 T FirstName {source}:1\n'
                f'08001001 T SecondName {source}:2\n'
            )

            functions = read_decomp((symbols,))
            function = functions[symbols]['8001000']

        self.assertTrue(function['ambiguous'])
        self.assertEqual(function['name'], 'FirstName')
        self.assertEqual(function['aliases'], ['SecondName'])


def symbol(name, *, ambiguous=False):
    return {
        'name': name,
        'decl': f'void {name}(void)',
        'type': 'T',
        'aliases': [],
        'ambiguous': ambiguous,
    }


def function_sets():
    return {infile: {} for infile in INFILES}


class MappingResolutionTests(unittest.TestCase):
    def test_placeholder_is_detached_from_cross_game_mapping(self):
        functions = function_sets()
        functions['fe6.txt']['808B7A0'] = symbol('func_fe6_0808B7A0')
        functions['fireemblem8u.txt']['80B8174'] = symbol(
            'StartEndingTurnRecordScreen'
        )
        row = [
            '', '808B7A0', '0', '0', '0', '80B8174',
            '', '', '', '\n',
        ]

        resolved = resolve_function_rows([row], functions)

        self.assertEqual(len(resolved), 2)
        self.assertFalse(any(r[1] != '0' and r[5] != '0' for r in resolved))
        self.assertEqual(sum(r[1] == '808B7A0' for r in resolved), 1)
        self.assertEqual(sum(r[5] == '80B8174' for r in resolved), 1)

    def test_placeholder_in_each_pinned_game_taints_the_entire_candidate_row(self):
        pinned = (
            ('fe6.txt', 1, 'func_fe6_08001000'),
            ('fireemblem8j.txt', 4, 'sub_8004000'),
            ('fireemblem8u.txt', 5, 'FUN_08005000'),
        )
        for infile, column, name in pinned:
            with self.subTest(infile=infile):
                functions = function_sets()
                addresses = [
                    '0', '8001000', '8002000', '8003000', '8004000', '8005000'
                ]
                functions[infile][addresses[column]] = symbol(name)
                row = ['', *addresses[1:], '', '', '', '\n']

                resolved = resolve_function_rows([row], functions)

                self.assertEqual(len(resolved), 5)
                self.assertTrue(
                    all(
                        sum(r[index] != '0' for index in range(1, 6)) == 1
                        for r in resolved
                    )
                )

    def test_curated_placeholder_splits_every_candidate_game(self):
        functions = function_sets()
        row = [
            '', '8001000', '8002000', '0', '0', '8003000',
            'nullsub_1', '', '', '\n',
        ]

        resolved = resolve_function_rows([row], functions)

        self.assertEqual(len(resolved), 3)
        self.assertTrue(
            all(sum(r[column] != '0' for column in range(1, 6)) == 1
                for r in resolved)
        )

    def test_ambiguous_candidate_is_detached_from_mapping(self):
        functions = function_sets()
        functions['fe6.txt']['8001000'] = symbol('PossibleName', ambiguous=True)
        row = [
            '', '8001000', '0', '0', '0', '8002000',
            '', '', '', '\n',
        ]

        resolved = resolve_function_rows([row], functions)

        self.assertEqual(len(resolved), 2)
        self.assertTrue(
            all(sum(r[column] != '0' for column in range(1, 6)) == 1
                for r in resolved)
        )

    def test_duplicate_address_is_retained_once_but_never_arbitrated(self):
        functions = function_sets()
        rows = [
            ['', '808B7A0', '1', '0', '0', '0', '', '', '', '\n'],
            ['', '808B7A0', '2', '0', '0', '0', '', '', '', '\n'],
        ]

        resolved = resolve_function_rows(rows, functions)

        self.assertEqual(sum(row[1] == '808B7A0' for row in resolved), 1)
        self.assertFalse(
            any(row[1] == '808B7A0' and row[2] != '0' for row in resolved)
        )

    def test_exact_pinned_name_is_the_only_automatic_merge_evidence(self):
        functions = function_sets()
        functions['fe6.txt']['8001000'] = symbol('SharedName')
        functions['fireemblem8u.txt']['8002000'] = symbol('SharedName')
        rows = [
            ['', '8001000', '0', '0', '0', '0', '', '', '', '\n'],
            ['', '0', '0', '0', '0', '8002000', '', '', '', '\n'],
        ]

        resolved = resolve_function_rows(rows, functions)

        self.assertEqual(len(resolved), 1)
        self.assertEqual(resolved[0][1], '8001000')
        self.assertEqual(resolved[0][5], '8002000')

    def test_conflicting_trusted_same_game_name_has_stable_diagnostic(self):
        functions = function_sets()
        functions['fe6.txt']['8001000'] = symbol('ConflictingName')
        functions['fe6.txt']['8002000'] = symbol('ConflictingName')
        rows = [
            ['', '8001000', '0', '0', '0', '0', '', '', '', '\n'],
            ['', '8002000', '0', '0', '0', '0', '', '', '', '\n'],
        ]

        with self.assertRaisesRegex(
            ValueError,
            "trusted name 'ConflictingName' has conflicting "
            "FE6 addresses 8001000 and 8002000",
        ):
            resolve_function_rows(rows, functions)


class GeneratedSurfaceTests(unittest.TestCase):
    def test_multisym_is_pinned_to_fe8u_column(self):
        self.assertEqual(MULTISYM_COLUMN, 5)
        info = ['', 'FE6', 'FE7J', 'FE7U', 'FE8J', 'FE8U']
        self.assertEqual(multisym_address(info), 'FE8U')

    def test_index_preamble_preserves_powered_by_documentation(self):
        preamble = index_preamble()

        self.assertIn('## Powered by', preamble)
        self.assertIn('fireemblem6j', preamble)
        self.assertIn('fireemblem8u', preamble)
        self.assertIn('fireemblem8j', preamble)

    def test_current_index_matches_regeneration(self):
        self.assertEqual(Path('index.md').read_text(), render_index())


if __name__ == '__main__':
    unittest.main()
