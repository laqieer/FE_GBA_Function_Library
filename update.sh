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
FE8J_ELF="${FE8J_ELF:-../fireemblem8j/fireemblem8.elf}"

decomp_commit()
{
	repo_dir=$(dirname "$1")
	fallback="$2"

	git -C "$repo_dir" rev-parse --short HEAD 2>/dev/null || printf '%s\n' "$fallback"
}

# Dump address/source-line symbols from a decomp ELF (needs debug info, i.e.
# `nm -l`). Only overwrite the tracked list when the ELF actually yields
# source-line symbols so a debug-stripped build cannot wipe committed data.
dump_symbols()
{
	elf="$1"
	out="$2"

	tmp=$(mktemp)
	"$NM" -l -n "$elf" | grep src | grep '^08' | grep -v gcc2_compiled > "$tmp" || true
	if [ -s "$tmp" ]; then
		mv "$tmp" "$out"
	else
		rm -f "$tmp"
		printf 'warning: %s has no source-line symbols (missing debug info?); keeping existing %s\n' "$elf" "$out" >&2
	fi
}

export FE6_COMMIT="${FE6_COMMIT:-$(decomp_commit "$FE6_ELF" 16154bc)}"
export FE8U_COMMIT="${FE8U_COMMIT:-$(decomp_commit "$FE8U_ELF" 0578c6b8)}"
export FE8J_COMMIT="${FE8J_COMMIT:-$(decomp_commit "$FE8J_ELF" 1afe4977)}"

dump_symbols "$FE6_ELF" fe6.txt
dump_symbols "$FE8U_ELF" fireemblem8u.txt
dump_symbols "$FE8J_ELF" fireemblem8j.txt
./improve_by_decomp.py
