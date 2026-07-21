#!/usr/bin/env python3

import os
import posixpath
import re
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

GAME_COLUMNS = {
        1: "FE6",
        2: "FE7J",
        3: "FE7U",
        4: "FE8J",
        5: "FE8U",
        }

SOURCE_ROOT_ENV = {
        "fe6.txt": "FE6_SOURCE_ROOT",
        "fireemblem8u.txt": "FE8U_SOURCE_ROOT",
        "fireemblem8j.txt": "FE8J_SOURCE_ROOT",
        }

GENERATED_SOURCE_FALLBACKS = {
        ("fireemblem8u.txt", "src/data/chapter_settings.h"):
            "src/data/chapter_settings.json.txt",
        }

ROM_START = 0x08000000
ROM_END = 0x09FFFFFF
GBA_ADDRESS_RANGES = (
        (0x02000000, 0x02040000),  # EWRAM, including the end marker
        (0x03000000, 0x03008000),  # IWRAM, including the end marker
        (0x04000000, 0x040003FF),  # I/O
        (0x05000000, 0x05000400),  # palette RAM, including the end marker
        (0x06000000, 0x06018000),  # VRAM, including the end marker
        (0x07000000, 0x07000400),  # OAM, including the end marker
        (ROM_START, ROM_END),      # canonical 32 MiB ROM window
        (0x0E000000, 0x0E010000),  # SRAM, including the end marker
        )

PLACEHOLDER_NAME = re.compile(
        r"^(?:"
        r"(?:func|function|sub|FUN|unknown|unk|loc|LAB|label|thunk)"
        r"(?:_[a-z0-9]+)*_?(?:0x)?0?[0-9a-f]{6,8}|"
        r"nullsub(?:_[0-9]+)?|"
        r"j_(?:sub|func)_[0-9a-f]+|"
        r"_call_via_r\d+|"
        r"\.gcc2_compiled(?:\..*)?"
        r")$",
        re.IGNORECASE,
        )

AMBIGUOUS_MAPPING_COMMENT = (
        "Ambiguous legacy cross-game mapping rejected; address retained separately."
        )


def is_gba_address(address):
    return any(start <= address <= end for start, end in GBA_ADDRESS_RANGES)


def normalize_address(address, context, *, rom_only=False, thumb=False):
    try:
        value = int(address, 16)
    except ValueError as exc:
        raise ValueError(f"{context}: malformed address {address!r}") from exc

    if rom_only:
        valid = ROM_START <= value <= ROM_END
    else:
        valid = is_gba_address(value)
    if not valid:
        kind = "ROM " if rom_only else ""
        raise ValueError(f"{context}: out-of-range GBA {kind}address {address!r}")

    # The low bit is a Thumb-state marker only for ROM code pointers. Data and
    # I/O addresses such as 04000063 must retain their byte address.
    if thumb and ROM_START <= value <= ROM_END:
        value &= ~1
    return format(value, 'X')


def is_placeholder_name(name):
    return bool(
        PLACEHOLDER_NAME.fullmatch(name)
        or name.startswith('__')
        or name.startswith('.')
        )


def declaration_matches_name(declaration, name):
        return bool(re.search(
            rf"(?<![A-Za-z0-9_]){re.escape(name)}\s*\(",
            declaration,
        ))


def parse_symbol_line(line, infile, line_number):
    fields = line.split(maxsplit=3)
    if len(fields) != 4:
        raise ValueError(f"{infile}:{line_number}: malformed symbol entry")

    address, symbol_type, name, location = fields
    try:
        filename, source_line = location.rsplit(':', 1)
        source_line = int(source_line)
    except ValueError as exc:
        raise ValueError(f"{infile}:{line_number}: malformed symbol entry") from exc
    normalized_address = normalize_address(
        address,
        f"{infile}:{line_number}",
        rom_only=True,
        thumb=True,
        )

    return {
        'address': normalized_address,
        'type': symbol_type,
        'name': name,
        'filename': filename,
        'linenum': source_line,
        'infile': infile,
    }


def source_relative_path(filename):
    normalized = posixpath.normpath(str(filename))
    marker = '/src/'
    if marker not in normalized:
        return None
    return 'src/' + normalized.split(marker, 1)[1]


def source_resolution(symbol):
    environment_name = SOURCE_ROOT_ENV.get(symbol.get('infile'))
    source_root = os.environ.get(environment_name, '') if environment_name else ''
    relative = source_relative_path(symbol['filename'])
    fallback = GENERATED_SOURCE_FALLBACKS.get(
        (symbol.get('infile'), relative)
    )

    if source_root and relative:
        candidate_relative = fallback or relative
        candidate = Path(source_root) / candidate_relative
        if candidate.exists():
            return candidate, fallback is not None
        if fallback:
            raise ValueError(
                f"{symbol['filename']}: approved fallback {fallback!r} "
                f"does not exist beneath {source_root}"
            )
        raise ValueError(
            f"{symbol['filename']}: source file {relative!r} "
            f"does not exist beneath {source_root}"
        )

    normalized_filename = Path(posixpath.normpath(symbol['filename']))
    if fallback and relative:
        repository_root = Path(str(normalized_filename).split('/src/', 1)[0])
        candidate = repository_root / fallback
        if candidate.exists():
            return candidate, True
        raise ValueError(
            f"{symbol['filename']}: approved fallback {fallback!r} "
            "does not exist"
        )

    if normalized_filename.exists():
        return normalized_filename, False

    raise ValueError(f"{symbol['filename']}: source file does not exist")


def source_filename(symbol):
    return source_resolution(symbol)[0]


def _declaration_start(src, source_index, name):
    pattern = re.compile(rf"(?<![A-Za-z0-9_]){re.escape(name)}\s*\(")
    limit = max(0, source_index - 30)
    for index in range(source_index, limit - 1, -1):
        if pattern.search(src[index]):
            return index
    return None


def _collect_declaration(src, declaration_index, name):
    lines = []
    depth = 0
    found_parameters = False
    name_pattern = re.compile(rf"(?<![A-Za-z0-9_]){re.escape(name)}\s*\(")

    for line in src[declaration_index:]:
        text = line.split('{', 1)[0]
        lines.append(text.strip())
        scan = text
        if not found_parameters:
            match = name_pattern.search(scan)
            if match:
                scan = scan[match.end() - 1:]
                found_parameters = True
        if found_parameters:
            depth += scan.count('(') - scan.count(')')
            if depth <= 0:
                break
        if len(lines) > 40:
            raise ValueError(
                f"declaration for {name} exceeds 40 source lines"
            )

    declaration = ' '.join(part for part in lines if part).strip()
    if not found_parameters or depth != 0:
        raise ValueError(f"unbalanced declaration for {name}: {declaration!r}")
    return declaration.rstrip(';').strip()


def extract_declaration(symbol):
    source_path, used_fallback = source_resolution(symbol)
    src = source_path.read_text().splitlines()
    source_index = symbol['linenum'] - 1
    if source_index < 0:
        raise ValueError(
            f"{symbol['filename']}:{symbol['linenum']}: source location is out of range"
        )

    name = symbol['name']
    if used_fallback:
        name_pattern = re.compile(
            rf"(?<![A-Za-z0-9_]){re.escape(name)}(?![A-Za-z0-9_])"
        )
        matches = [
            index for index, line in enumerate(src) if name_pattern.search(line)
        ]
        if len(matches) != 1:
            raise ValueError(
                f"{source_path}: fallback source must contain exactly one "
                f"declaration of {name}, found {len(matches)}"
            )
        declaration_index = matches[0]
        declaration = src[declaration_index].split('{', 1)[0].strip()
    else:
        if source_index >= len(src):
            raise ValueError(
                f"{symbol['filename']}:{symbol['linenum']}: "
                "source location is out of range"
            )
        declaration_index = _declaration_start(src, source_index, name)
        if declaration_index is None:
            # Assembly labels and boundary symbols do not necessarily have a C
            # prototype. Keep their mapped source line without pretending it
            # is a parsed declaration.
            declaration_index = source_index
            declaration = src[declaration_index].split('{', 1)[0].strip()
        else:
            declaration = _collect_declaration(src, declaration_index, name)

    symbol = dict(symbol)
    symbol['decl'] = declaration
    symbol['filename'] = str(source_path)
    symbol['linenum'] = declaration_index + 1
    return symbol


def primary_symbol(candidates):
    def score(symbol):
        name = symbol['name']
        declaration_matches = declaration_matches_name(symbol['decl'], name)
        is_placeholder = is_placeholder_name(name)
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
            viable_names = {
                item['name']
                for item in candidates
                if not is_placeholder_name(item['name'])
                and declaration_matches_name(item['decl'], item['name'])
                and item['type'].isupper()
            }
            aliases = []
            for item in candidates:
                if item is primary or item['name'] in aliases:
                    continue
                aliases.append(item['name'])
            functions[infile][address] = {
                **primary,
                'aliases': aliases,
                'ambiguous': len(viable_names) > 1,
            }

    return functions


def read_multisym(path='multisym.txt'):
    symbols = defaultdict(list)
    for line_number, line in enumerate(Path(path).read_text().splitlines(), 1):
        match = re.fullmatch(r"([0-9A-Fa-f]{8}) (.+)", line)
        if not match:
            raise ValueError(f"{path}:{line_number}: malformed multisym entry")
        raw_address, raw_names = match.groups()
        address = normalize_address(
            raw_address,
            f"{path}:{line_number}",
            thumb=True,
            )
        names = [name.strip() for name in raw_names.split(',')]
        if any(not name for name in names):
            raise ValueError(f"{path}:{line_number}: empty multisym alias")
        for name in names:
            if name not in symbols[address]:
                symbols[address].append(name)
    return dict(symbols)


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
                normalize_address(
                    address,
                    f"{path}:{line_number}",
                )
        rows.append(info)
    return lines[2:4], rows


def _blank_row():
    return ['', '0', '0', '0', '0', '0', '', '', '', '\n']


def _matched_symbol(functions, column, address):
    for infile, candidate_column in COLUMNS.items():
        if candidate_column == column:
            return functions.get(infile, {}).get(address)
    return None


def resolve_function_rows(rows, functions):
    """Reject ambiguous legacy edges without discarding any address.

    A repeated per-game address has more than one possible mapping, so every
    occurrence is detached and the address is emitted once as a standalone
    row. Placeholder or ambiguous pinned symbols are likewise detached from
    multi-game rows. Finally, exact non-placeholder names from pinned decomps
    may consolidate detached rows; this is the only automatic allowlist.
    """
    occurrences = defaultdict(list)
    for row_index, info in enumerate(rows):
        for column in range(1, 6):
            if info[column] != '0':
                occurrences[(column, info[column])].append(row_index)

    ambiguous_keys = {
        key for key, row_indexes in occurrences.items() if len(row_indexes) > 1
    }
    detached = set()
    for info in rows:
        if sum(info[column] != '0' for column in range(1, 6)) <= 1:
            continue
        tainted = is_placeholder_name(info[6].strip()) or any(
            (column, info[column]) in ambiguous_keys
            for column in range(1, 6)
            if info[column] != '0'
        )
        for column in COLUMNS.values():
            address = info[column]
            symbol = _matched_symbol(functions, column, address)
            if symbol and (
                is_placeholder_name(symbol['name'])
                or symbol.get('ambiguous', False)
            ):
                tainted = True
        if tainted:
            detached.update(
                (column, info[column])
                for column in range(1, 6)
                if info[column] != '0'
            )

    resolved = []
    standalone = {}
    for row_index, original in enumerate(rows):
        info = original.copy()
        for column in range(1, 6):
            key = (column, info[column])
            if info[column] != '0' and key in detached:
                standalone.setdefault(key, (row_index, column, info[column]))
                info[column] = '0'
        if any(info[column] != '0' for column in range(1, 6)):
            resolved.append(info)

    for row_index, column, address in sorted(standalone.values()):
        info = _blank_row()
        info[column] = address
        info[8] = AMBIGUOUS_MAPPING_COMMENT
        resolved.append(info)

    # If the same exact trusted name ended up on separate rows, move only the
    # evidence-backed pinned cells into one row. Do not drag unpinned FE7
    # candidates along or select one of their conflicting mappings.
    by_name = defaultdict(list)
    for row_index, info in enumerate(resolved):
        for column in COLUMNS.values():
            address = info[column]
            symbol = _matched_symbol(functions, column, address)
            if (
                symbol
                and not is_placeholder_name(symbol['name'])
                and not symbol.get('ambiguous', False)
            ):
                by_name[symbol['name']].append((row_index, column, address))

    remove_cells = set()
    evidence_rows = []
    for name, cells in by_name.items():
        if len({row_index for row_index, _, _ in cells}) <= 1:
            continue
        evidence = _blank_row()
        evidence[6] = name
        for row_index, column, address in cells:
            if evidence[column] not in ('0', address):
                raise ValueError(
                    f"trusted name {name!r} has conflicting "
                    f"{GAME_COLUMNS[column]} addresses "
                    f"{evidence[column]} and {address}"
                )
            evidence[column] = address
            remove_cells.add((row_index, column))
        evidence_rows.append(evidence)

    consolidated = []
    for row_index, original in enumerate(resolved):
        info = original.copy()
        for column in range(1, 6):
            if (row_index, column) in remove_cells:
                info[column] = '0'
        if any(info[column] != '0' for column in range(1, 6)):
            consolidated.append(info)
    consolidated.extend(evidence_rows)
    return consolidated


def markdown_link(label, url):
    label = ' '.join(label.split())
    label = label.replace('\\', r'\\').replace('[', r'\[').replace(']', r'\]')
    label = label.replace('|', '&#124;')
    return f"[{label}]({url})"


def _append_comment(comment, addition):
    if not addition:
        return comment
    return addition if not comment else f"{addition}<br>{comment}"


def render_index(functions=None, symbols=None):
    functions = read_decomp() if functions is None else functions
    symbols = read_multisym() if symbols is None else symbols
    table_header, rows = parse_function_rows()
    rows = resolve_function_rows(rows, functions)
    output = [index_preamble(), *table_header]
    rendered = []
    name_sources = []

    for original in rows:
        info = original.copy()
        matched_functions = []
        for infile in INFILES:
            address = info[COLUMNS[infile]]
            if address in functions[infile]:
                function = dict(functions[infile][address])
                function['infile'] = infile
                matched_functions.append(function)

        declarations = []
        name_source = "curated" if info[6].strip() else "empty"
        address_count = sum(info[column] != '0' for column in range(1, 6))
        for function in matched_functions:
            source_path = function['filename'].split('/src/', 1)
            if len(source_path) != 2:
                raise ValueError(
                    f"{function['filename']}: source path does not contain /src/"
                )
            declarations.append(markdown_link(
                function['decl'],
                f"{PREFIXES[function['infile']]}/src/{source_path[1]}"
                f"#L{function['linenum']}",
            ))
            policy = NAME_POLICY.get(function['infile'], "override")
            if policy == "never":
                continue
            placeholder = is_placeholder_name(function['name'])
            if placeholder and address_count > 1:
                raise ValueError(
                    f"placeholder {function['name']} remained in a multi-game mapping"
                )
            if policy == "fill_empty" and info[6].strip() != '':
                continue
            if info[6].endswith('(ARM)'):
                info[6] = f"{function['name']}(ARM)"
            else:
                info[6] = function['name']
            name_source = "placeholder" if placeholder else "trusted"
        info[7] = '<br>'.join(declarations)

        aliases = []
        for name in symbols.get(multisym_address(info), []):
            if name == info[6] or name + '(ARM)' == info[6]:
                continue
            if name not in aliases:
                aliases.append(name)
        info[8] = _append_comment(info[8], ', '.join(aliases))
        rendered.append(info)
        name_sources.append(name_source)

    names = defaultdict(list)
    for index, info in enumerate(rendered):
        name = info[6].strip()
        if name:
            names[name].append(index)
    for name, indexes in names.items():
        if len(indexes) <= 1:
            continue
        trusted = [index for index in indexes if name_sources[index] == "trusted"]
        if len(trusted) > 1:
            raise ValueError(f"unresolved trusted duplicate name {name!r}")
        clear = [index for index in indexes if index not in trusted]
        if not trusted:
            clear = indexes
        for index in clear:
            rendered[index][6] = ''
            rendered[index][8] = _append_comment(
                rendered[index][8],
                f"Ambiguous duplicate name omitted: {name}",
            )

    for info in rendered:
        output.append('|'.join(info))

    return ''.join(output)


def main():
    Path('index.md').write_text(render_index())


if __name__ == '__main__':
    main()
