# export function detailed infomation in IDA 7.0
# by laqieer
# 2018/11/18

import idautils
import ida_hexrays
import os

if __name__ == "__main__":
	file = idc.AskFile(1, "*.md", "Export functions infomation to table")
	if file is not None:
		table = os.open(file, os.O_WRONLY | os.O_CREAT)
		if table is not None:
			os.write(table, "# Function infomation in " + idaapi.get_root_filename() + "\n")
			os.write(table, "\n|Address|Name|Declaration|Comment|\n")
			os.write(table, "|----|----|----|----|\n")
			for func_ea in idautils.Functions():
				name = idaapi.get_func_name(func_ea)
				if idaapi.is_uname(name):
					func = idaapi.get_func(func_ea)
					comment = idaapi.get_func_cmt(func, 1)
					if comment is None:
						comment = ""
					# new line in comment
					comment = comment.replace("\n", "<br>")
					# pf = ida_hexrays._decompile(func, None)
					try:
						pf = ida_hexrays.decompile(func_ea, ida_hexrays.hexrays_failure_t(0, func_ea, name))
					except ida_hexrays.DecompilationFailure, e:
						print e, name
						decl = ""
					else:
						decl = pf.print_dcl()
					# delete SOH
					decl = decl.replace("\x01", "")
					# delete STX
					decl = decl.replace("\x02", "")
					# delete ETB
					decl = decl.replace("\x17", "")
					decl = decl.replace("!", "")
					# delete call standard
					decl = decl.replace("__fastcall ", "")
					decl = decl.replace("__stdcall ", "")
					decl = decl.replace("__cdecl ", "")
					decl = decl.replace("__usrcall ", "")
					decl = decl.replace("__noreturn ", "")
					# mark ARM functions
					if idc.get_sreg(func_ea, "T") == 0:
						name = name + "(ARM)"
					os.write(table, "|%X|%s|%s|%s|\n" % (func_ea, name, decl, comment))
			os.close(table)
			print("Function infomation has been exported to " + file)