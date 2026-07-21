import unittest
from pathlib import Path

from improve_by_decomp import read_multisym
from validate_library import (
    parse_index_rows,
    validate_declaration_links,
    validate_index_semantics,
    validate_index_text,
)


def index_with(*rows):
    return (
        '# Synthetic\n\n'
        '|FE6|FE7J|FE7U|FE8J|FE8U|Name|Declaration|Comment|\n'
        '|----|----|----|----|----|----|----|----|\n'
        + ''.join(rows)
    )


class SyntheticFinalOutputTests(unittest.TestCase):
    def test_rejects_duplicate_final_address(self):
        text = index_with(
            '|8001000|0|0|0|0|One|||\n',
            '|8001000|0|0|0|0|Two|||\n',
        )
        with self.assertRaisesRegex(ValueError, 'conflicting generated duplicates'):
            validate_index_text(text, functions={}, symbols={}, path='synthetic')

    def test_rejects_duplicate_final_name(self):
        text = index_with(
            '|8001000|0|0|0|0|Same|||\n',
            '|8002000|0|0|0|0|Same|||\n',
        )
        with self.assertRaisesRegex(ValueError, 'conflicting generated duplicates'):
            validate_index_text(text, functions={}, symbols={}, path='synthetic')

    def test_rejects_duplicate_mapping(self):
        text = index_with(
            '|8001000|8002000|0|0|0|One|||\n',
            '|8001000|8002000|0|0|0|Two|||\n',
        )
        with self.assertRaisesRegex(ValueError, 'conflicting generated duplicates'):
            validate_index_text(text, functions={}, symbols={}, path='synthetic')

    def test_rejects_unbalanced_declaration_link(self):
        text = index_with(
            '|8001000|0|0|0|0|Bad|'
            '[int broken)](https://example.invalid/src.c#L1)||\n',
        )
        with self.assertRaisesRegex(ValueError, 'malformed declaration links'):
            validate_index_text(text, functions={}, symbols={}, path='synthetic')

    def test_rejects_out_of_range_final_address(self):
        text = index_with('|18000001|0|0|0|0|Bad|||\n')
        with self.assertRaisesRegex(ValueError, 'out-of-range'):
            validate_index_text(text, functions={}, symbols={}, path='synthetic')

    def test_accepts_valid_ram_function_address_without_rounding(self):
        text = index_with('|3002D8D|0|0|0|0|RamFunction|||\n')
        stats = validate_index_text(
            text,
            functions={},
            symbols={},
            path='synthetic',
        )
        self.assertEqual(stats['rows'], 1)

    def test_rejects_placeholder_named_cross_game_mapping(self):
        text = index_with(
            '|8001000|8002000|0|0|0|sub_8001000|||\n'
        )
        with self.assertRaisesRegex(ValueError, 'placeholder name'):
            validate_index_text(text, functions={}, symbols={}, path='synthetic')

    def test_allows_explicit_standalone_placeholder(self):
        text = index_with('|8001000|0|0|0|0|sub_8001000|||\n')
        stats = validate_index_text(
            text,
            functions={},
            symbols={},
            path='synthetic',
        )
        self.assertEqual(stats['rows'], 1)

    def test_rejects_unescaped_brackets_in_declaration_link(self):
        text = index_with(
            '|8001000|0|0|0|0|Bad|'
            '[int Bad(int args[4])](https://example.invalid/src.c#L1)||\n',
        )
        with self.assertRaisesRegex(ValueError, 'malformed declaration links'):
            validate_index_text(text, functions={}, symbols={}, path='synthetic')

    def test_accepts_balanced_escaped_brackets_in_declaration_link(self):
        text = index_with(
            '|8001000|0|0|0|0|Good|'
            r'[int Good(int args\[4\])](https://example.invalid/src.c#L1)'
            '||\n',
        )
        rows = parse_index_rows(text, path='synthetic')
        self.assertEqual(
            validate_declaration_links(rows, path='synthetic'),
            1,
        )

    def test_alias_coverage_uses_exact_aliases_not_substrings(self):
        text = index_with('|0|0|0|0|8001000|FooBar|||\n')
        with self.assertRaisesRegex(ValueError, "lost multisym alias 'Foo'"):
            validate_index_text(
                text,
                functions={},
                symbols={'8001000': ['Foo']},
                path='synthetic',
            )

    def test_alias_coverage_accepts_primary_and_ordered_comment_aliases(self):
        text = index_with(
            '|0|0|0|0|8001000|Primary||First, Second|\n'
        )
        stats = validate_index_text(
            text,
            functions={},
            symbols={'8001000': ['Primary', 'First', 'Second']},
            path='synthetic',
        )
        self.assertEqual(stats['aliases'], 3)


class CurrentTextOutputTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.symbols = read_multisym()
        cls.text = Path('index.md').read_text()

    def test_current_output_has_class_wide_semantic_cleanliness(self):
        stats = validate_index_semantics(
            self.text,
            symbols=self.symbols,
        )
        self.assertEqual(stats['duplicate_names'], 0)
        self.assertEqual(stats['duplicate_addresses'], 0)
        self.assertEqual(stats['duplicate_mappings'], 0)
        self.assertGreater(stats['links'], 19000)
        self.assertGreater(stats['aliases'], 4000)


if __name__ == '__main__':
    unittest.main()
