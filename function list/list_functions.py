# list functions in IDA
# by laqieer
# 2018-11-14

import idautils

if __name__ == "__main__":
	file = idc.AskFile(1, "*.md", "Save functions to list")
	if file is not None:
		list = os.open(file, os.O_WRONLY | os.O_CREAT)
		if list is not None:
			os.write(list, "# Functions in %s\n\n" % idaapi.get_root_filename())
			os.write(list, "| Address | Name | Comment |\n")
			os.write(list, "| ------ | ------ | ------ |\n")
			for func in idautils.Functions(0x3000000, BADADDR):
				os.write(list, "| 0x%X | %s | %s |\n" % (func, idaapi.get_func_name(func), idaapi.get_func_cmt(idaapi.get_func(func), 1)))
			os.close(list)
			print "Functions have been written to ", file