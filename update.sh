#!/bin/sh
set -eu

if [ -n "${DEVKITARM:-}" ] && [ -x "$DEVKITARM/bin/arm-none-eabi-nm" ]; then
	NM="$DEVKITARM/bin/arm-none-eabi-nm"
else
	NM="${NM:-arm-none-eabi-nm}"
fi

FE6_ELF="${FE6_ELF:-../fireemblem6j/fe6.elf}"
if [ ! -f "$FE6_ELF" ] && [ -f "../fe6/fe6.elf" ]; then
	FE6_ELF="../fe6/fe6.elf"
fi

FE8U_ELF="${FE8U_ELF:-../fireemblem8u/fireemblem8.elf}"

"$NM" -l -n "$FE6_ELF" | grep src | grep '^08' | grep -v gcc2_compiled > fe6.txt
"$NM" -l -n "$FE8U_ELF" | grep src | grep '^08' | grep -v gcc2_compiled > fireemblem8u.txt
./improve_by_decomp.py
