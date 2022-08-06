#!/bin/sh

$DEVKITARM/bin/arm-none-eabi-nm -l -n ../fe6/fe6.elf | grep src | grep '^08' | grep -v gcc2_compiled > fe6.txt
$DEVKITARM/bin/arm-none-eabi-nm -l -n ../fireemblem8u/fireemblem8.elf | grep src | grep '^08' | grep -v gcc2_compiled > fireemblem8u.txt
./improve_by_decomp.py
