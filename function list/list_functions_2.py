#!/usr/bin/python

# list functions in IDB file
# you can read infomation from IDA database directly without IDA Pro installed, but it requires to install python-idb
# usage: list_functions_2 IDB_file >output_file
# by laqieer
# 2018-11-16

import idb
import sys

# markdown header
print("# Functions in %s\n" % sys.argv[1])
print("| Address | Name | Comment |")
print("| ------ | ------ | ------ |")

# table content
with idb.from_file(sys.argv[1]) as db:
	api = idb.IDAPython(db)
	root = idb.analysis.Root(db)
	# IDA Pro 6.8
	if root.version <= 680:
		for ea in api.idautils.Functions():
			print('| 0x%X | %s | %s |' % (ea, api.idc.GetFunctionName(ea), api.idc.GetFunctionCmt(ea, 1)))
	# IDA Pro 7.0
	if root.version >= 700:
		for ea in api.idautils.Functions():
			print('| 0x%X | %s | %s |' % (ea, api.ida_funcs.get_func_name(ea), api.ida_funcs.get_func_cmt(ea, 1)))