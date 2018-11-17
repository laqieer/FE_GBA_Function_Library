#!/usr/bin/python

# Merge function matching results
# Usage: merge_match_results.py >../functions.md
# by laqieer
# 2018/11/17

result = []

threhold = 0.8

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
	print "|FE6|FE7J|FE7U|FE8J|FE8U|Name|Comment|"
	print "|----|----|----|----|----|----|----|"
	for i in result:
		#TODO merge function infomation like name and comment
		print("|%X|%X|%X|%X|%X|||" % (i.get("FE6", 0), i.get("FE7J", 0), i.get("FE7U", 0), i.get("FE8J", 0), i.get("FE8U", 0)))

# Merge results of BinDiff 4.3.0

read_bindiff_result("FE8J", "FE7J")
read_bindiff_result("FE8J", "FE8U")
read_bindiff_result("FE7J", "FE7U")
read_bindiff_result("FE7J", "FE6")

# Merge results of diaphora

read_diaphora_result("FE7J", "FE8J")
read_diaphora_result("FE8U", "FE8J")
read_diaphora_result("FE7U", "FE7J")
read_diaphora_result("FE6", "FE7J")
			
output_table()