import tempfile
from pathlib import Path
import unittest

import decomp_reference_tools as tools


class DecompReferenceToolsTest(unittest.TestCase):
    def test_parse_nm_lines_classifies_global_symbols(self):
        lines = [
            "08000a20 00000068 T AgbMain",
            "08012345 00000020 T GetItemAttributes",
            "08045678 00000004 D gSomeTable",
            "08099999 00000002 t local_helper",
            "         U external",
        ]

        symbols = tools.parse_nm_lines(lines)

        self.assertEqual(
            symbols,
            [
                tools.Symbol("AgbMain", 0x08000A20, "func"),
                tools.Symbol("GetItemAttributes", 0x08012345, "func"),
                tools.Symbol("gSomeTable", 0x08045678, "data"),
            ],
        )

    def test_parse_iwram_symbols_handles_split_assignments(self):
        with tempfile.TemporaryDirectory() as tmp:
            path = Path(tmp) / "sym_iwram.txt"
            path.write_text(
                """
                . = 0x004E50; gActiveUnit = .;
                . = 0x004F10;
                AiDecideMainFunc = .;
                """,
            )

            symbols = tools.parse_iwram_symbols(path)

        self.assertEqual(
            symbols,
            [
                tools.Symbol("gActiveUnit", 0x03004E50, "data"),
                tools.Symbol("AiDecideMainFunc", 0x03004F10, "data"),
            ],
        )

    def test_writes_lyn_reference_and_ea_defines(self):
        symbols = [
            tools.Symbol("AgbMain", 0x08000A20, "func"),
            tools.Symbol("gActiveUnit", 0x03004E50, "data"),
        ]

        with tempfile.TemporaryDirectory() as tmp:
            ref = Path(tmp) / "ref.s"
            defines = Path(tmp) / "defs.event"
            tools.write_lyn_reference(ref, symbols, "test snapshot")
            tools.write_ea_defines(defines, symbols, "test snapshot")

            self.assertIn("SET_FUNC AgbMain, 0x08000A20", ref.read_text())
            self.assertIn("SET_DATA gActiveUnit, 0x03004E50", ref.read_text())
            self.assertIn("#define AgbMain     0x08000A20", defines.read_text())
            self.assertIn("#define gActiveUnit 0x03004E50", defines.read_text())


if __name__ == "__main__":
    unittest.main()
