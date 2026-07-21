#!/usr/bin/env python3

import re
from collections import Counter, defaultdict
from pathlib import Path

from improve_by_decomp import (
    COLUMNS,
    GAME_COLUMNS,
    INFILES,
    PREFIXES,
    is_placeholder_name,
    normalize_address,
    read_decomp,
    read_multisym,
    render_index,
    source_relative_path,
)


LINK = re.compile(
    r"^\[((?:\\.|[^\[\]\\])*)\]\((https://[^\s()]+)\)$"
)


def parse_index_rows(text, path='index.md'):
    rows = []
    for line_number, line in enumerate(text.splitlines(keepends=True), 1):
        if not line.startswith('|'):
            continue
        fields = line.split('|')
        if len(fields) != 10:
            raise ValueError(
                f"{path}:{line_number}: expected 10 pipe-separated fields"
            )
        if fields[1] in ('FE6', '----'):
            continue
        for column in range(1, 6):
            if fields[column] != '0':
                normalize_address(
                    fields[column],
                    f"{path}:{line_number}",
                )
        rows.append((line_number, fields))
    if not rows:
        raise ValueError(f"{path}: no generated function rows")
    return rows


def validate_declaration_links(rows, path='index.md'):
    link_count = 0
    malformed = []
    for line_number, fields in rows:
        declaration = fields[7]
        if not declaration:
            continue
        for raw_link in declaration.split('<br>'):
            match = LINK.fullmatch(raw_link)
            if not match:
                malformed.append((line_number, raw_link))
                continue
            label, _ = match.groups()
            # Escaped square brackets are safe in Markdown. Parentheses in the
            # declaration itself must still be balanced.
            if label.count('(') != label.count(')'):
                malformed.append((line_number, label))
            link_count += 1
    if malformed:
        details = '; '.join(f"{path}:{line}: {value!r}" for line, value in malformed)
        raise ValueError(f"malformed declaration links: {details}")
    return link_count


def validate_unique_output(rows, path='index.md'):
    duplicate_addresses = {}
    for column, game in GAME_COLUMNS.items():
        counts = Counter(
            fields[column]
            for _, fields in rows
            if fields[column] != '0'
        )
        duplicate_addresses[game] = {
            address: count for address, count in counts.items() if count > 1
        }
    duplicate_names = {
        name: count
        for name, count in Counter(
            fields[6].strip() for _, fields in rows if fields[6].strip()
        ).items()
        if count > 1
    }
    duplicate_mappings = {
        mapping: count
        for mapping, count in Counter(
            tuple(fields[1:6]) for _, fields in rows
        ).items()
        if count > 1
    }
    if any(duplicate_addresses.values()) or duplicate_names or duplicate_mappings:
        raise ValueError(
            f"{path}: conflicting generated duplicates: "
            f"addresses={duplicate_addresses}, names={duplicate_names}, "
            f"mappings={duplicate_mappings}"
        )
    return duplicate_addresses, duplicate_names, duplicate_mappings


def validate_mapping_confidence(rows, functions, path='index.md'):
    for line_number, fields in rows:
        if sum(fields[column] != '0' for column in range(1, 6)) <= 1:
            continue
        if is_placeholder_name(fields[6].strip()):
            raise ValueError(
                f"{path}:{line_number}: placeholder name "
                f"{fields[6].strip()!r} remains cross-game mapped"
            )
        for infile, column in COLUMNS.items():
            symbol = functions.get(infile, {}).get(fields[column])
            if not symbol:
                continue
            if is_placeholder_name(symbol['name']) or symbol.get('ambiguous', False):
                raise ValueError(
                    f"{path}:{line_number}: non-confident {infile} symbol "
                    f"{symbol['name']!r} remains cross-game mapped"
                )


def validate_source_link_coverage(rows, functions, path='index.md'):
    expected = 0
    for line_number, fields in rows:
        declaration = fields[7]
        targets = {
            match.group(2)
            for value in declaration.split('<br>')
            if (match := LINK.fullmatch(value))
        }
        for infile, column in COLUMNS.items():
            symbol = functions.get(infile, {}).get(fields[column])
            if not symbol:
                continue
            expected += 1
            relative = source_relative_path(symbol['filename'])
            if relative is None:
                raise ValueError(
                    f"{path}:{line_number}: invalid {infile} source path "
                    f"{symbol['filename']!r}"
                )
            expected_url = (
                f"{PREFIXES[infile]}/{relative}"
                f"#L{symbol['linenum']}"
            )
            if expected_url not in targets:
                raise ValueError(
                    f"{path}:{line_number}: missing exact {infile} "
                    f"declaration link {expected_url}"
                )
    return expected


def validate_alias_coverage(rows, symbols, path='index.md'):
    output_by_fe8u = {
        fields[5]: fields for _, fields in rows if fields[5] != '0'
    }
    covered = 0
    for address, aliases in symbols.items():
        fields = output_by_fe8u.get(address)
        if not fields:
            continue
        represented = {fields[6].removesuffix('(ARM)')}
        represented.update(
            value.strip()
            for segment in fields[8].split('<br>')
            for value in segment.split(', ')
            if value.strip()
        )
        for alias in aliases:
            if alias not in represented:
                raise ValueError(
                    f"{path}: FE8U {address} silently lost multisym alias {alias!r}"
                )
            covered += 1
    return covered


def validate_index_semantics(text, symbols=None, path='index.md'):
    symbols = read_multisym() if symbols is None else symbols
    rows = parse_index_rows(text, path)
    links = validate_declaration_links(rows, path)
    validate_unique_output(rows, path)
    validate_mapping_confidence(rows, {}, path)
    aliases = validate_alias_coverage(rows, symbols, path)
    return {
        'rows': len(rows),
        'links': links,
        'aliases': aliases,
        'duplicate_names': 0,
        'duplicate_addresses': 0,
        'duplicate_mappings': 0,
    }


def validate_index_text(text, functions=None, symbols=None, path='index.md'):
    functions = read_decomp() if functions is None else functions
    symbols = read_multisym() if symbols is None else symbols
    stats = validate_index_semantics(text, symbols, path)
    rows = parse_index_rows(text, path)
    validate_mapping_confidence(rows, functions, path)
    expected_links = validate_source_link_coverage(rows, functions, path)
    if stats['links'] != expected_links:
        raise ValueError(
            f"{path}: declaration link count {stats['links']} "
            f"!= expected {expected_links}"
        )
    return stats


def main():
    functions = read_decomp()
    symbols = read_multisym()
    expected_index = render_index(functions=functions, symbols=symbols)
    actual_index = Path('index.md').read_text()
    if actual_index != expected_index:
        raise SystemExit("index.md is stale; run ./update.sh")

    stats = validate_index_text(actual_index, functions, symbols)
    counts = ', '.join(
        f"{infile}={len(functions[infile])}" for infile in INFILES
    )
    source_aliases = sum(len(names) for names in symbols.values())
    print(f"validated symbols: {counts}")
    print(
        f"generated rows={stats['rows']}, declaration links={stats['links']}, "
        "unbalanced links=0"
    )
    print(
        "generated conflicts: duplicate names=0, duplicate addresses=0, "
        "duplicate mappings=0, placeholder mappings=0"
    )
    print(
        f"multisym aliases loaded={source_aliases}, "
        f"aliases represented on indexed FE8U addresses={stats['aliases']}"
    )
    print("generated index is current and deterministic")


if __name__ == '__main__':
    main()
