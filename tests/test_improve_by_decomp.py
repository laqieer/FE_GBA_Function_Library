import unittest

from improve_by_decomp import (
    MULTISYM_COLUMN,
    index_preamble,
    multisym_address,
    primary_symbol,
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


if __name__ == '__main__':
    unittest.main()
