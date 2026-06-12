#!/usr/bin/env python3
"""Generate buildfile-friendly symbol exports from a FE decomp ELF.

The main output is a lyn/FE-CLib-style reference assembly file:

    SET_FUNC SomeThumbFunc, 0x08012345
    SET_DATA gSomeTable,    0x08045678

The same symbol set can also be exported as an Event Assembler #define file.
"""

from __future__ import annotations

import argparse
from dataclasses import dataclass
from pathlib import Path
import re
import subprocess
import sys


FUNC_TYPES = set("TtWw")
DATA_TYPES = set("DdRrBbCcGgSsVvAa")
GLOBAL_TYPES = set("TWD RBSVAGC".replace(" ", ""))


@dataclass(frozen=True)
class Symbol:
    name: str
    address: int
    kind: str


def parse_int(value: str) -> int:
    value = value.strip()
    return int(value, 16 if value.lower().startswith("0x") else 16)


def valid_symbol_name(name: str) -> bool:
    return bool(re.match(r"^[A-Za-z_][A-Za-z0-9_.$]*$", name)) and not name.startswith(".")


def classify_nm_type(symbol_type: str) -> str | None:
    if symbol_type in FUNC_TYPES:
        return "func"
    if symbol_type in DATA_TYPES:
        return "data"
    return None


def parse_nm_lines(lines: list[str], include_local: bool = False) -> list[Symbol]:
    """Parse GNU nm output from `nm -S --defined-only -n`.

    Accepted forms:
      08000a20 00000068 T AgbMain
      08000a20 T AgbMain
    """
    symbols: list[Symbol] = []

    for raw in lines:
        line = raw.strip()
        if not line or " gcc2_compiled" in line:
            continue

        parts = line.split()
        if len(parts) >= 4 and re.fullmatch(r"[0-9A-Fa-f]+", parts[0]) and len(parts[2]) == 1:
            address_text, symbol_type, name = parts[0], parts[2], parts[3]
        elif len(parts) >= 3 and re.fullmatch(r"[0-9A-Fa-f]+", parts[0]) and len(parts[1]) == 1:
            address_text, symbol_type, name = parts[0], parts[1], parts[2]
        else:
            continue

        if not include_local and symbol_type not in GLOBAL_TYPES:
            continue

        kind = classify_nm_type(symbol_type)
        if kind is None or not valid_symbol_name(name):
            continue

        symbols.append(Symbol(name=name, address=parse_int(address_text), kind=kind))

    return symbols


def parse_iwram_symbols(path: Path, base: int = 0x03000000) -> list[Symbol]:
    """Parse decomp linker-style IWRAM symbols from sym_iwram.txt."""
    symbols: list[Symbol] = []
    current_address: int | None = None

    combined = re.compile(
        r"\.\s*=\s*0x([0-9A-Fa-f]+)\s*;\s*([A-Za-z_][A-Za-z0-9_.$]*)\s*=\s*\.\s*;"
    )
    assign_address = re.compile(r"\.\s*=\s*0x([0-9A-Fa-f]+)\s*;")
    assign_symbol = re.compile(r"([A-Za-z_][A-Za-z0-9_.$]*)\s*=\s*\.\s*;")

    for raw in path.read_text().splitlines():
        line = raw.split("/*", 1)[0].strip()
        if not line:
            continue

        match = combined.search(line)
        if match:
            address = base + parse_int(match.group(1))
            name = match.group(2)
            if valid_symbol_name(name):
                symbols.append(Symbol(name=name, address=address, kind="data"))
            current_address = address
            continue

        match = assign_address.search(line)
        if match:
            current_address = base + parse_int(match.group(1))
            continue

        match = assign_symbol.search(line)
        if match and current_address is not None:
            name = match.group(1)
            if valid_symbol_name(name):
                symbols.append(Symbol(name=name, address=current_address, kind="data"))

    return symbols


def merge_symbols(symbol_sets: list[list[Symbol]]) -> list[Symbol]:
    merged: dict[str, Symbol] = {}
    for symbols in symbol_sets:
        for symbol in symbols:
            # Earlier inputs win so the ELF's func/data classification stays authoritative.
            merged.setdefault(symbol.name, symbol)
    return sorted(merged.values(), key=lambda symbol: (symbol.address, symbol.name))


def run_nm(nm: str, elf: Path) -> list[str]:
    command = [nm, "-S", "--defined-only", "--extern-only", "-n", str(elf)]
    result = subprocess.run(command, check=True, text=True, stdout=subprocess.PIPE)
    return result.stdout.splitlines()


def write_lyn_reference(path: Path, symbols: list[Symbol], snapshot: str) -> None:
    with path.open("w", newline="\n") as out:
        out.write(f"@ Generated from {snapshot}; do not edit by hand.\n\n")
        out.write(".macro SET_FUNC name, value\n")
        out.write("    .global \\name\n")
        out.write("    .type   \\name, function\n")
        out.write("    .set    \\name, \\value\n")
        out.write(".endm\n\n")
        out.write(".macro SET_DATA name, value\n")
        out.write("    .global \\name\n")
        out.write("    .type   \\name, object\n")
        out.write("    .set    \\name, \\value\n")
        out.write(".endm\n\n")

        for symbol in symbols:
            macro = "SET_FUNC" if symbol.kind == "func" else "SET_DATA"
            out.write(f"{macro} {symbol.name}, 0x{symbol.address:08X}\n")


def write_ea_defines(path: Path, symbols: list[Symbol], snapshot: str) -> None:
    width = max((len(symbol.name) for symbol in symbols), default=0)
    with path.open("w", newline="\n") as out:
        out.write(f"// Generated from {snapshot}; do not edit by hand.\n")
        out.write("// Usage: #include this file from an Event Assembler script.\n\n")
        for symbol in symbols:
            out.write(f"#define {symbol.name.ljust(width)} 0x{symbol.address:08X}\n")


def build_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(
        description="Generate lyn reference and EA define files from a Fire Emblem decomp ELF."
    )
    parser.add_argument("--elf", type=Path, help="Decomp ELF file, e.g. fireemblem8.elf")
    parser.add_argument("--nm", default="arm-none-eabi-nm", help="nm executable to use with --elf")
    parser.add_argument("--nm-file", type=Path, help="Precomputed GNU nm output to read instead of --elf")
    parser.add_argument("--iwram-symbols", type=Path, help="Optional sym_iwram.txt to merge as 0x03000000 data symbols")
    parser.add_argument("--lyn-reference", type=Path, help="Output lyn/FE-CLib-style .s reference file")
    parser.add_argument("--ea-defines", type=Path, help="Output Event Assembler #define include file")
    parser.add_argument("--snapshot", default="a Fire Emblem decomp build", help="Human-readable source label in output comments")
    parser.add_argument("--include-local", action="store_true", help="Include local lowercase nm symbols")
    return parser


def main(argv: list[str] | None = None) -> int:
    parser = build_parser()
    args = parser.parse_args(argv)

    if not args.lyn_reference and not args.ea_defines:
        parser.error("at least one output is required: --lyn-reference or --ea-defines")
    if bool(args.elf) == bool(args.nm_file):
        parser.error("provide exactly one of --elf or --nm-file")

    symbol_sets: list[list[Symbol]] = []
    if args.nm_file:
        symbol_sets.append(parse_nm_lines(args.nm_file.read_text().splitlines(), args.include_local))
    else:
        symbol_sets.append(parse_nm_lines(run_nm(args.nm, args.elf), args.include_local))

    if args.iwram_symbols:
        symbol_sets.append(parse_iwram_symbols(args.iwram_symbols))

    symbols = merge_symbols(symbol_sets)
    if not symbols:
        parser.error("no symbols parsed")

    if args.lyn_reference:
        write_lyn_reference(args.lyn_reference, symbols, args.snapshot)
    if args.ea_defines:
        write_ea_defines(args.ea_defines, symbols, args.snapshot)

    print(f"wrote {len(symbols)} symbols", file=sys.stderr)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
