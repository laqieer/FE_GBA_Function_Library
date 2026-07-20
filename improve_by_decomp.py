#!/usr/bin/env python3

import os
import subprocess
from collections import defaultdict
from pathlib import Path

INFILES = (
        "fe6.txt",
        "fireemblem8u.txt",
        "fireemblem8j.txt"
        )

COLUMNS = {
        "fe6.txt": 1,
        "fireemblem8u.txt": 5,
        "fireemblem8j.txt": 4
        }

ROOT = Path(__file__).resolve().parent


def resolve_commit(environment_name, repository, fallback):
    if environment_name in os.environ:
        return os.environ[environment_name]

    result = subprocess.run(
        ['git', '-C', str(ROOT.parent / repository), 'rev-parse', 'HEAD'],
        check=False,
        capture_output=True,
        text=True,
    )
    if result.returncode == 0:
        return result.stdout.strip()
    return fallback


PREFIXES = {
        "fe6.txt": "https://github.com/FireEmblemUniverse/fireemblem6j/blob/" + resolve_commit("FE6_COMMIT", "fireemblem6j", "16154bc"),
        "fireemblem8u.txt": "https://github.com/laqieer/fireemblem8u/blob/" + resolve_commit("FE8U_COMMIT", "fireemblem8u", "0578c6b8"),
        "fireemblem8j.txt": "https://github.com/laqieer/fireemblem8j/blob/" + resolve_commit("FE8J_COMMIT", "fireemblem8j", "1afe4977")
        }

# How each source may set the Name column. Trusted decomps ("override") replace
# the base name; a disassembly like FE8J ("fill_empty") only names rows that are
# still unnamed, so its placeholder names (sub_XXXX, _call_via_rN, ...) never
# clobber curated names. Every source still contributes Declaration links.
NAME_POLICY = {
        "fe6.txt": "override",
        "fireemblem8u.txt": "override",
        "fireemblem8j.txt": "fill_empty"
        }

# multisym.txt is an FE8U symbol source. Keep this explicit so adding another
# decomp input cannot silently change which game's address is used.
MULTISYM_COLUMN = 5


def parse_symbol_line(line, infile, line_number):
    fields = line.split(maxsplit=3)
    if len(fields) != 4:
        raise ValueError(f"{infile}:{line_number}: malformed symbol entry")

    address, symbol_type, name, location = fields
    try:
        filename, source_line = location.rsplit(':', 1)
        source_line = int(source_line)
        normalized_address = format(int(address, 16) & 0xFFFFFFE, 'X')
    except ValueError as exc:
        raise ValueError(f"{infile}:{line_number}: malformed symbol entry") from exc

    return {
        'address': normalized_address,
        'type': symbol_type,
        'name': name,
        'filename': filename,
        'linenum': source_line,
    }


def extract_declaration(symbol):
    src = Path(symbol['filename']).read_text().splitlines()
    source_index = symbol['linenum'] - 1
    if source_index < 0 or source_index >= len(src):
        raise ValueError(
            f"{symbol['filename']}:{symbol['linenum']}: source location is out of range"
        )

    name = symbol['name']
    declaration_index = source_index
    mapped_line = src[declaration_index]

    if not mapped_line.lstrip().startswith('{') and (name + '(') not in mapped_line:
        limit = max(0, declaration_index - 20)
        for index in range(declaration_index, limit - 1, -1):
            if (name + '(') in src[index]:
                declaration_index = index
                break

    declaration = src[declaration_index]
    if declaration.lstrip().startswith('{') and declaration_index > 0:
        declaration_index -= 1
        declaration = src[declaration_index]
    else:
        declaration = declaration.split('{', 1)[0]

    if ';' in declaration and (name + '(') in declaration:
        segments = [segment for segment in declaration.split(';') if (name + '(') in segment]
        if segments:
            declaration = segments[-1]

    symbol = dict(symbol)
    symbol['decl'] = declaration.strip()
    symbol['linenum'] = declaration_index + 1
    return symbol


def primary_symbol(candidates):
    def score(symbol):
        name = symbol['name']
        declaration_matches = (name + '(') in symbol['decl']
        is_placeholder = (
            name.startswith('__')
            or name.startswith('sub_')
            or name.startswith('_call_via_')
            or name.startswith('.')
        )
        return declaration_matches, not is_placeholder, symbol['type'].isupper()

    return max(enumerate(candidates), key=lambda item: (score(item[1]), -item[0]))[1]


def read_decomp(infiles=INFILES):
    functions = {}
    for infile in infiles:
        by_address = defaultdict(list)
        global_names = defaultdict(set)

        for line_number, line in enumerate(Path(infile).read_text().splitlines(), 1):
            symbol = parse_symbol_line(line, infile, line_number)
            symbol = extract_declaration(symbol)
            if symbol['decl'].startswith('asm('):
                continue
            by_address[symbol['address']].append(symbol)
            if symbol['type'].isupper():
                global_names[symbol['name']].add(symbol['address'])

        duplicates = {
            name: addresses for name, addresses in global_names.items() if len(addresses) > 1
        }
        if duplicates:
            details = ', '.join(
                f"{name}={','.join(sorted(addresses))}"
                for name, addresses in sorted(duplicates.items())
            )
            raise ValueError(f"{infile}: duplicate global names at different addresses: {details}")

        functions[infile] = {}
        for address, candidates in by_address.items():
            primary = primary_symbol(candidates)
            functions[infile][address] = {
                **primary,
                'aliases': [item['name'] for item in candidates if item is not primary],
            }

    return functions


def read_multisym(path='multisym.txt'):
    symbols = {}
    for line_number, line in enumerate(Path(path).read_text().splitlines(), 1):
        if len(line) < 10:
            raise ValueError(f"{path}:{line_number}: malformed multisym entry")
        try:
            address = format(int(line[:8], 16) & 0xFFFFFFE, 'X')
        except ValueError as exc:
            raise ValueError(f"{path}:{line_number}: malformed multisym address") from exc
        symbols[address] = line[9:].strip().split(', ')
    return symbols


def multisym_address(info):
    return info[MULTISYM_COLUMN]


def index_preamble():
    return """# Functions in GBAFE

## Powered by

This function index is powered by debug-info ELF builds from the GBAFE decompilation projects:

- [FE6: The Binding Blade](https://github.com/FireEmblemUniverse/fireemblem6j) - `update.sh` reads `fireemblem6j/fe6.elf` with `nm -l` for declarations and source-line links.
- [FE8U: The Sacred Stones](https://github.com/laqieer/fireemblem8u) - `update.sh` reads `fireemblem8u/fireemblem8.elf` for FE8U declarations and links.
- [FE8J: 聖魔の光石 / Seima no Kouseki](https://github.com/laqieer/fireemblem8j) - `update.sh` reads `fireemblem8j/fireemblem8.elf` for FE8J declarations and links.

"""


def parse_function_rows(path='functions.md'):
    lines = Path(path).read_text().splitlines(keepends=True)
    if len(lines) < 4:
        raise ValueError(f"{path}: missing table header")

    rows = []
    for line_number, line in enumerate(lines[4:], 5):
        info = line.split('|')
        if len(info) != 10:
            raise ValueError(f"{path}:{line_number}: expected 10 pipe-separated fields")
        for column in range(1, 6):
            address = info[column]
            if address != '0':
                try:
                    int(address, 16)
                except ValueError as exc:
                    raise ValueError(
                        f"{path}:{line_number}: invalid address {address!r}"
                    ) from exc
        rows.append(info)
    return lines[2:4], rows


def render_index(functions=None, symbols=None):
    functions = functions or read_decomp()
    symbols = symbols or read_multisym()
    table_header, rows = parse_function_rows()
    output = [index_preamble(), *table_header]

    for info in rows:
        matched_functions = []
        for infile in INFILES:
            address = info[COLUMNS[infile]]
            if address in functions[infile]:
                function = dict(functions[infile][address])
                function['infile'] = infile
                matched_functions.append(function)

        for index, function in enumerate(matched_functions):
            if index > 0:
                info[7] += '<br>'
            else:
                info[7] = ''
            source_path = function['filename'].split('/src/', 1)
            if len(source_path) != 2:
                raise ValueError(
                    f"{function['filename']}: source path does not contain /src/"
                )
            info[7] += (
                f"[{function['decl']}]"
                f"({PREFIXES[function['infile']]}/src/{source_path[1]}"
                f"#L{function['linenum']})"
            )
            if index > 0:
                continue
            policy = NAME_POLICY.get(function['infile'], "override")
            if policy == "never":
                continue
            if policy == "fill_empty" and info[6].strip() != '':
                continue
            if info[6].endswith('(ARM)'):
                info[6] = f"{function['name']}(ARM)"
            else:
                info[6] = function['name']

        alias_count = 0
        for name in symbols.get(multisym_address(info), []):
            if name == info[6] or name + '(ARM)' == info[6]:
                continue
            if alias_count > 0:
                info[8] = ', ' + info[8]
            elif info[8] != '':
                info[8] = '<br>' + info[8]
            info[8] = name + info[8]
            alias_count += 1

        output.append('|'.join(info))

    return ''.join(output)


def main():
    Path('index.md').write_text(render_index())


if __name__ == '__main__':
    main()
