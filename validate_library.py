#!/usr/bin/env python3

from collections import defaultdict
from pathlib import Path

from improve_by_decomp import INFILES, parse_function_rows, read_decomp, render_index


def duplicate_counts():
    _, rows = parse_function_rows()
    addresses = [defaultdict(int) for _ in range(5)]
    names = defaultdict(int)

    for info in rows:
        for index in range(5):
            address = info[index + 1]
            if address != '0':
                addresses[index][address] += 1
        name = info[6].strip()
        if name:
            names[name] += 1

    duplicate_addresses = [
        sum(count > 1 for count in game.values()) for game in addresses
    ]
    duplicate_names = sum(count > 1 for count in names.values())
    return duplicate_addresses, duplicate_names


def main():
    functions = read_decomp()
    expected_index = render_index(functions=functions)
    actual_index = Path('index.md').read_text()
    if actual_index != expected_index:
        raise SystemExit("index.md is stale; run ./update.sh")

    alias_addresses = {
        infile: sum(bool(symbol['aliases']) for symbol in functions[infile].values())
        for infile in INFILES
    }
    duplicate_addresses, duplicate_names = duplicate_counts()

    counts = ', '.join(
        f"{infile}={len(functions[infile])}" for infile in INFILES
    )
    aliases = ', '.join(
        f"{infile}={alias_addresses[infile]}" for infile in INFILES
    )
    print(f"validated symbols: {counts}")
    print(f"same-address aliases resolved: {aliases}")
    print(
        "cross-game table duplicates detected: "
        f"addresses={duplicate_addresses}, names={duplicate_names}"
    )
    print("generated index is current and deterministic")


if __name__ == '__main__':
    main()
