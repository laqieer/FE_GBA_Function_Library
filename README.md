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

## Decomp reference exports

`decomp_reference_tools.py` converts symbols from a Fire Emblem decomp ELF into files that
ROM-hacking build tools can consume:

- a `lyn` / FE-CLib-style reference assembly file (`SET_FUNC` / `SET_DATA`)
- an Event Assembler include file with `#define` addresses

Example for `fireemblem8u`:

```sh
python3 decomp_reference_tools.py \
  --elf ../fireemblem8u/fireemblem8.elf \
  --iwram-symbols ../fireemblem8u/sym_iwram.txt \
  --lyn-reference FE8U-decomp-reference.s \
  --ea-defines FE8U-decomp-defines.event \
  --snapshot "laqieer/fireemblem8u master"
```

Assemble the generated reference file and use it with `lyn`:

```sh
arm-none-eabi-as FE8U-decomp-reference.s -o FE8U-decomp-reference.o
lyn hack.o FE8U-decomp-reference.o > hack.lyn.event
```

The generated EA include can be used directly from `.event` scripts:

```event
#include "FE8U-decomp-defines.event"
```

This keeps function/data addresses synchronized with the decomp build instead of relying
on a manually maintained vanilla reference object.

**Feel free to contribute**

**Working on your first Pull Request?** You can learn how from this *free* series [How to Contribute to an Open Source Project on GitHub](https://kcd.im/pull-request)
