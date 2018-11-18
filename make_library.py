#!/usr/bin/python
# -*- coding: UTF-8 -*-

# make library for hacking
# Usage: make_library.py input(default:functions)
# by laqieer
# 2018/11/18

import sys

if len(sys.argv) == 1:
	input = 'functions'
else:
	input = sys.argv[1]

data = []

# read data	
with open(input+'.md', 'r') as f1:
	rows = f1.readlines()
	for row in range(4,len(rows)):
		col = rows[row].split("|")
		item = {}
		if not col[1] == "0":
			item["FE6"] = col[1]
		if not col[2] == "0":
			item["FE7J"] = col[2]
		if not col[3] == "0":
			item["FE7U"] = col[3]
		if not col[4] == "0":
			item["FE8J"] = col[4]
		if not col[5] == "0":
			item["FE8U"] = col[5]
		if not col[6] == "":
			item["name"] = col[6]
		if not col[7] == "":
			item["decl"] = col[7]
		if not col[8] == "":
			item["comment"] = col[8]
		data.append(item)

# make C headers
with open(input+'.h', 'w') as f2:
	f2.write("#pragma once\n\n")
	
	# add type definition
	f2.write("#include \"FE8U.h\"\n")
	f2.write("#include \"FE7J.h\"\n\n")
	
	for item in data:
		if item.has_key("decl"):
			if item.has_key("comment"):
				comment = item["comment"].replace("<br>", "\n")
				f2.write("/* " + comment + "*/\n")
			f2.write(item["decl"] + ";\n\n")

def make_macro(f, game):
	"make macro for different games"
	f.write("#ifdef " + game + "\n")
	for item in data:
		if item.has_key("name") and item.has_key(game):
			name = item["name"].split("(")
			if len(name) > 1 and name[-1] == "ARM)":
				f.write("%s = 0x%s;\n" % (name[0], item[game]))
			else:
				f.write("%s = 0x%s + 1;\n" % (name[0], item[game]))
	f.write("#endif\n\n")
			
# make linker script
with open(input+'.ls', 'w') as f3:
	f3.write("/* Run C preprocessor and include to your linker script. */\n\n")
	make_macro(f3, "FE6")
	make_macro(f3, "FE7J")
	make_macro(f3, "FE7U")
	make_macro(f3, "FE8J")
	make_macro(f3, "FE8U")
