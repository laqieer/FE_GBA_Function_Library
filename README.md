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

## Updating from decomp projects

`update.sh` refreshes the FE6 and FE8U decomp-derived function information from local ELF
builds. By default it reads:

- `../fireemblem6j/fe6.elf`
- `../fireemblem8u/fireemblem8.elf`

Override those paths when needed:

```sh
FE6_ELF=/path/to/fe6.elf FE8U_ELF=/path/to/fireemblem8.elf ./update.sh
```

For generated linker scripts, `lyn` reference assembly, and Event Assembler symbol include
files, use [`laqieer/FE-Clib-Decomp`](https://github.com/laqieer/FE-Clib-Decomp). This
repository stays focused on cross-game function documentation.

**Feel free to contribute**

**Working on your first Pull Request?** You can learn how from this *free* series [How to Contribute to an Open Source Project on GitHub](https://kcd.im/pull-request)
