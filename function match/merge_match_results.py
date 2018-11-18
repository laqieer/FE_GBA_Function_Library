#!/usr/bin/python
# -*- coding: UTF-8 -*-

# Merge function matching results
# Usage: merge_match_results.py threhold(0-1,default:0.8) >../functions.md
# by laqieer
# 2018/11/17

import sys

result = []

# get threhold to balance Accuracy and Recall
if len(sys.argv) == 1:
	threhold = 0.8
else:
	threhold = sys.argv[1]

def read_basic_info():
	"read basic info provided by user"
	with open(r'../basic_info.md') as f1:
		line = f1.readlines()
		for i in range(5,len(line)):
			info = line[i].split("|")
			item = {}
			if not info[1] == "":
				item["FE6"] = int(info[1], 16)
			if not info[2] == "":
				item["FE7J"] = int(info[2], 16)
			if not info[3] == "":
				item["FE7U"] = int(info[3], 16)
			if not info[4] == "":
				item["FE8J"] = int(info[4], 16)
			if not info[5] == "":
				item["FE8U"] = int(info[5], 16)
			if not info[6] == "":
				item["name"] = info[6]
			if not info[7] == "":
				item["decl"] = info[7]
			if not info[8] == "":
				item["comment"] = info[8]
			result.append(item)
	
def insert_pair_to_result(pair):
	"insert a matching pair to result"
	for i in result:
		for k1, v1 in i.items():
			for k2, v2 in pair.items():
				if k1 == k2 and v1 == v2:
					for k3, v3 in pair.items():
						if not i.has_key(k3):
							i[k3] = v3
					return
	result.append(pair)

def read_bindiff_result(first, second):
	"read result of BinDiff"
	with open(r'BinDiff 4.3.0/'+first+' vs '+second+'/Matched Functions.txt') as f1:
		line = f1.readlines()
		for i in range(2,len(line)):
			match = line[i].split()
			if float(match[0]) >= threhold and float(match[1]) >= threhold:
				pair = { first : int(match[3], 16), second : int(match[5], 16) }
				insert_pair_to_result(pair)
				
def read_diaphora_result(first, second):
	"read result of diaphora"
	with open(r'diaphora/'+first+' vs '+second+'/Best matches.txt') as f1:
		line = f1.readlines()
		for i in range(2,len(line)):
			match = line[i].split()
			pair = { first : int(match[1], 16), second : int(match[3], 16) }
			insert_pair_to_result(pair)
	with open(r'diaphora/'+first+' vs '+second+'/Partial matches.txt') as f1:
		line = f1.readlines()
		for i in range(2,len(line)):
			match = line[i].split()
			if float(match[5]) >= threhold:
				pair = { first : int(match[1], 16), second : int(match[3], 16) }
				insert_pair_to_result(pair)

def output_table():
	"output table in markdown format"
	print "# Functions in GBAFE\n"
	print "|FE6|FE7J|FE7U|FE8J|FE8U|Name|Declaration|Comment|"
	print "|----|----|----|----|----|----|----|----|"
	for i in result:
		#TODO merge function infomation like name and comment
		print("|%X|%X|%X|%X|%X|%s|%s|%s|" % (i.get("FE6", 0), i.get("FE7J", 0), i.get("FE7U", 0), i.get("FE8J", 0), i.get("FE8U", 0), i.get("name", ""), i.get("decl", ""), i.get("comment", "")))

def add_func_info(game):
	"read function infomation and add to result"
	with open(r'../function info/func_info_'+game+'.md') as f1:
		line = f1.readlines()
		for i in range(4,len(line)):
			info = line[i].split("|")
			for j in result:
				for k1, v1 in j.items():
					if k1 == game and v1 == int(info[1], 16):
						if not j.has_key("name"):
							j["name"] = info[2]
						if not j.has_key("decl"):
							j["decl"] = info[3]
						if not j.has_key("comment"):
							j["comment"] = info[4]
						info.append("inserted")
						break
				if "inserted" in info:
					break
#			if "inserted" not in info:
#				result.append({ game : int(info[1], 16), "name" : info[2], "decl" : info[3], "comment" : info[4] })

read_basic_info()

# Merge results of BinDiff 4.3.0
				
# print("Merging results of BinDiff 4.3.0 ...")
read_bindiff_result("FE8J", "FE7J")
read_bindiff_result("FE8J", "FE8U")
read_bindiff_result("FE7J", "FE7U")
read_bindiff_result("FE7J", "FE6")

# Merge results of diaphora

# print("Merging results of diaphora ...")
read_diaphora_result("FE7J", "FE8J")
read_diaphora_result("FE8U", "FE8J")
read_diaphora_result("FE7U", "FE7J")
read_diaphora_result("FE6", "FE7J")

# Add function detailed infomation

#print("Adding function detailed infomation ...")
add_func_info("FE8U")
add_func_info("FE7J")
			
output_table()