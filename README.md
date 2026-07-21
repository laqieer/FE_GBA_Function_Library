# FE GBA Function Library

[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=flat-square)](http://makeapullrequest.com)

[Read Online](https://laqieer.github.io/FE_GBA_Function_Library/)

This project is to doc functions in Fire Emblem Series on Gameboy Advance:
* FE6: 封印の剣 / Binding Blade
* FE7J: 烈火の剣
* FE7U: Blazing Sword
* FE8J: 聖魔の光石
* FE8U: The Sacred Stones

![Function Quantity](https://raw.github.com/laqieer/FE_GBA_Function_Library/master/img/Function%20Quantity.png)
![Code Size](https://raw.githubusercontent.com/laqieer/FE_GBA_Function_Library/master/img/Code%20Size.png)

It is obvious that they share some source code. Here is my analysis result:

![Similar Functions](https://raw.github.com/laqieer/FE_GBA_Function_Library/master/img/Similar%20Functions.png)

It can help hackers who does ASM/C hacking and make it easier to port engine hack between different games.

## Powered by

This library is powered by debug-info ELF builds from the GBAFE decompilation projects:

- [FE6: The Binding Blade](https://github.com/FireEmblemUniverse/fireemblem6j) - `update.sh` reads `fireemblem6j/fe6.elf` with `nm -l` for declarations and source-line links.
- [FE8U: The Sacred Stones](https://github.com/laqieer/fireemblem8u) - `update.sh` reads `fireemblem8u/fireemblem8.elf` for FE8U declarations and links.
- [FE8J: 聖魔の光石 / Seima no Kouseki](https://github.com/laqieer/fireemblem8j) - `update.sh` reads `fireemblem8j/fireemblem8.elf` for FE8J declarations and links.

## Updating from decomp projects

`update.sh` refreshes the FE6, FE8U and FE8J decomp-derived function information from local
ELF builds. By default it reads:

- `../fireemblem6j/fe6.elf`
- `../fireemblem8u/fireemblem8.elf`
- `../fireemblem8j/fireemblem8.elf`

Override those paths when needed:

```sh
FE6_ELF=/path/to/fe6.elf FE8U_ELF=/path/to/fireemblem8.elf FE8J_ELF=/path/to/fireemblem8.elf ./update.sh
```

For a checkpointed serial refresh, extract one game at a time and finalize only
after all intended symbol lists are ready:

```sh
./update.sh extract fe6
./update.sh extract fe8u
./update.sh extract fe8j
./update.sh finalize
```

An `extract` command runs `nm` exactly once for that game and does not generate
or validate the library. `finalize` performs generation, tests, and validation
without reading an ELF or invoking `nm`. Running `./update.sh` without arguments
retains the original behavior in strict FE6, FE8U, FE8J, finalize order.

Each ELF must retain debug info so `nm -l` can map symbols back to source files and line
numbers. If an ELF has no source-line symbols (for example a debug-stripped build), that
game's list is left untouched instead of being overwritten with an empty file.

The update is atomic per symbol list and runs `validate_library.py` after generation. The
validator rejects malformed or ambiguous global symbols, confirms same-address aliases are
resolved deterministically, reports duplicate cross-game mappings, and verifies that
`index.md` is current.

### Address and alias normalization

- Decomp function symbols must be in the canonical GBA ROM window
  `0x08000000..0x09FFFFFF`. Their Thumb bit is cleared only after that range check, so an
  invalid value such as `0x18000001` is rejected rather than coerced to `0x08000000`.
- `multisym.txt` may also describe valid RAM, I/O, palette, VRAM, OAM, and SRAM addresses.
  Non-ROM odd addresses are data addresses and are never rounded down.
- Multiple `multisym.txt` records that identify the same normalized ROM address are merged
  in file order. Alias order is stable, duplicate spellings are removed, and no earlier
  aliases are overwritten.

### Cross-game matching confidence

`functions.md` contains legacy binary-match candidates. The generated `index.md` rejects
an entire candidate row when a per-game address occurs in multiple rows, or when a pinned
decomp identifies one of its symbols only with an address-derived placeholder (`func_*`,
`sub_*`, `FUN_*`, `nullsub_*`, and equivalent compiler labels). Rejected addresses are
retained exactly once as standalone rows; the generator never leaves the unverified
remainder paired or chooses an arbitrary duplicate.

The only automatic merge evidence is an exact, non-placeholder global name in the pinned
FE6J, FE8U, or FE8J decomps. The final-output validator checks every generated row for
balanced declaration links, unique names and per-game addresses, unique mappings, complete
source links, placeholder-free cross-game mappings, and represented `multisym` aliases.

For generated linker scripts, `lyn` reference assembly, and Event Assembler symbol include
files, use [`laqieer/FE-Clib-Decomp`](https://github.com/laqieer/FE-Clib-Decomp). This
repository stays focused on cross-game function documentation.

**Feel free to contribute**

**Working on your first Pull Request?** You can learn how from this *free* series [How to Contribute to an Open Source Project on GitHub](https://kcd.im/pull-request)
