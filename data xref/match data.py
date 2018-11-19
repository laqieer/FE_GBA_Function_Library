#!/usr/bin/python
# -*- coding: utf-8 -*- 

# match data in GBAFE, incuding WRAM, IRAM, .rodata
# by laqieer
# 2018/11/19

import json

# address range
WRAM_start = 0x2000000
WRAM_end = 0x203FFFF
IRAM_start = 0x3000000
IRAM_end = 0x3007FFF

with open('../function list/game_info.json', 'r') as f:
	game_info = json.load(f)
	RODATA_range = {"FE6" : {"start" : int(game_info["FE6"]["boundary"], 16), "end" : 0x87FFFFF}, "FE7J" : {"start" : int(game_info["FE7J"]["boundary"], 16), "end" : 0x8FFFFFF}, "FE7U" : {"start" : int(game_info["FE7U"]["boundary"], 16), "end" : 0x8FFFFFF}, "FE8J" : {"start" : int(game_info["FE8J"]["boundary"], 16), "end" : 0x8FFFFFF}, "FE8U" : {"start" : int(game_info["FE8U"]["boundary"], 16), "end" : 0x8FFFFFF}}

data_ref = {}

def load_data_ref(game):
	"load data reference from file"
	with open(game + '_func_ref_data.json', 'r') as f:
		data_ref[game] = json.load(f)

# read data reference
load_data_ref("FE6")
load_data_ref("FE7J")
load_data_ref("FE7U")
load_data_ref("FE8J")
load_data_ref("FE8U")

# output data reference in json format
#with open('data_ref_all.json', 'w') as f:
#	json.dump(data_ref, f)

data_match = {"FE7J" : {}, "FE8J" : {}}
# data_match[game1][data1][game2][data2][match_times]

def match_data_in_func(game1, addr1, game2, addr2):
	"func begins at addr1 in game1 and addr2 in game2, match data reference. game1 is FE7J or FE8J and FE7J > FE8J."
#	print 'matching function:', game1, addr1, game2, addr2
	addr1 = str(addr1)
	addr2 = str(addr2)
	if data_ref[game1].has_key(addr1):
		data1 = data_ref[game1][addr1]
		# only match the final xref data
		'''
		for i in data1:
			if type(data1[i]) != int:
				data1[i] = data1[i][0]
		'''
	else:
		return
	if data_ref[game2].has_key(addr2):
		data2 = data_ref[game2][addr2]
		# only match the final xref data
		'''
		for i in data2:
			if type(data2[i]) != int:
				data2[i] = data2[i][0]
		'''
	else:
		return
	offset1 = data1.keys()
	offset1.sort(key = lambda x : int(x))
	offset2 = data2.keys()
	offset2.sort(key = lambda x : int(x))
	if len(data1) == len(data2):
		# match by index
		for i in range(len(data1)):
			#if len(data1[offset1[i]]) == len(data2[offset2[i]]):
				#for j in range(len(data1[offset1[i]])):
				#data1[offset1[i]].reverse()
				#data2[offset2[i]].reverse()
				# loose constraint
				for j in range(min(len(data1[offset1[i]]), len(data2[offset2[i]]))):
					if not data_match[game1].has_key(data1[offset1[i]][j]):
						data_match[game1][data1[offset1[i]][j]] = {game2 : {data2[offset2[i]][j] : 1}}
					else:
						if not data_match[game1][data1[offset1[i]][j]].has_key(game2):
							data_match[game1][data1[offset1[i]][j]][game2] = {data2[offset2[i]][j] : 1}
						else:
							if data_match[game1][data1[offset1[i]][j]][game2].has_key(data2[offset2[i]][j]):
								data_match[game1][data1[offset1[i]][j]][game2][data2[offset2[i]][j]] = data_match[game1][data1[offset1[i]][j]][game2][data2[offset2[i]][j]] + 1
							else:
								data_match[game1][data1[offset1[i]][j]][game2][data2[offset2[i]][j]] = 1
	else:
		# match by offset
		for offset in offset1:
			if offset in offset2:
				#if len(data1[offset]) == len(data2[offset]):
					#for j in range(len(data1[offset])):
					#data1[offset].reverse()
					#data2[offset].reverse()
					# loose constraint
					for j in range(min(len(data1[offset]), len(data2[offset]))):
						if not data_match[game1].has_key(data1[offset][j]):
							data_match[game1][data1[offset][j]] = {game2 : {data2[offset][j] : 1}}
						else:
							if not data_match[game1][data1[offset][j]].has_key(game2):
								data_match[game1][data1[offset][j]][game2] = {data2[offset][j] : 1}
							else:
								if data_match[game1][data1[offset][j]][game2].has_key(data2[offset][j]):
									data_match[game1][data1[offset][j]][game2][data2[offset][j]] = data_match[game1][data1[offset][j]][game2][data2[offset][j]] + 1
								else:
									data_match[game1][data1[offset][j]][game2][data2[offset][j]] = 1
		#TODO match by assembly or pseudocode
	
	
# read matching functions
with open('../functions.md', 'r') as f:
	rows = f.readlines()
	for row in range(4,len(rows)):
		col = rows[row].split("|")
		# |FE6|FE7J|FE7U|FE8J|FE8U|
		# |1  |2   |3   |4   |5   |
		func_addr = {}
		func_addr["FE6"] = int(col[1], 16)
		func_addr["FE7J"] = int(col[2], 16)
		func_addr["FE7U"] = int(col[3], 16)
		func_addr["FE8J"] = int(col[4], 16)
		func_addr["FE8U"] = int(col[5], 16)
		if func_addr["FE7J"] != 0:
			if func_addr["FE6"] != 0:
				match_data_in_func("FE7J", func_addr["FE7J"], "FE6", func_addr["FE6"])
			if func_addr["FE7U"] != 0:
				match_data_in_func("FE7J", func_addr["FE7J"], "FE7U", func_addr["FE7U"])
			if func_addr["FE8J"] != 0:
				match_data_in_func("FE7J", func_addr["FE7J"], "FE8J", func_addr["FE8J"])
		if func_addr["FE8J"] != 0 and func_addr["FE8U"] != 0:
				match_data_in_func("FE8J", func_addr["FE8J"], "FE8U", func_addr["FE8U"])

# output all in json format
with open('data_match_all.json', 'w') as f:
	json.dump(data_match, f)
				
# output 3 tables in markdown format

f_WRAM = open('matching_data_in_WRAM.md', 'w')
f_IRAM = open('matching_data_in_IRAM.md', 'w')
f_RODATA = open('matching_data_in_ROM.md', 'w')

f_WRAM.write("# Matching data in WRAM\n\n")
f_IRAM.write("# Matching data in IRAM\n\n")
f_RODATA.write("# Matching data in RODATA\n\n")

f_WRAM.write("|FE6|FE7J|FE7U|FE8J|FE8U|\n")
f_WRAM.write("|----|----|----|----|----|\n")
f_IRAM.write("|FE6|FE7J|FE7U|FE8J|FE8U|\n")
f_IRAM.write("|----|----|----|----|----|\n")
f_RODATA.write("|FE6|FE7J|FE7U|FE8J|FE8U|\n")
f_RODATA.write("|----|----|----|----|----|\n")

data_FE7J_list = data_match["FE7J"].keys()
data_FE7J_list.sort(key = lambda x : int(x))
for data_FE7J in data_FE7J_list:
	if data_match["FE7J"][data_FE7J].has_key("FE6"):
		data_FE6 = max(zip(data_match["FE7J"][data_FE7J]["FE6"].values(), data_match["FE7J"][data_FE7J]["FE6"].keys()))[1]
	else:
		data_FE6 = 0
	if data_match["FE7J"][data_FE7J].has_key("FE7U"):
		data_FE7U = max(zip(data_match["FE7J"][data_FE7J]["FE7U"].values(), data_match["FE7J"][data_FE7J]["FE7U"].keys()))[1]
	else:
		data_FE7U = 0
	if data_match["FE7J"][data_FE7J].has_key("FE8J"):
		data_FE8J = max(zip(data_match["FE7J"][data_FE7J]["FE8J"].values(), data_match["FE7J"][data_FE7J]["FE8J"].keys()))[1]
		if data_match["FE8J"].has_key(data_FE8J):
			if data_match["FE8J"][data_FE8J].has_key("FE8U"):
				data_FE8U = max(zip(data_match["FE8J"][data_FE8J]["FE8U"].values(), data_match["FE8J"][data_FE8J]["FE8U"].keys()))[1]
			else:
				data_FE8U = 0
			del data_match["FE8J"][data_FE8J]
		else:
			data_FE8U = 0
	else:
		data_FE8J = 0
		data_FE8U = 0
	if data_FE7J >= WRAM_start and data_FE7J <= WRAM_end:
		if data_FE6 < WRAM_start or data_FE6 > WRAM_end:
			data_FE6 = 0
		if data_FE7U < WRAM_start or data_FE7U > WRAM_end:
			data_FE7U = 0
		if data_FE8J < WRAM_start or data_FE8J > WRAM_end:
			data_FE8J = 0
		if data_FE8U < WRAM_start or data_FE8U > WRAM_end:
			data_FE8U = 0
		f_WRAM.write("|%X|%X|%X|%X|%X|\n" % (data_FE6, data_FE7J, data_FE7U, data_FE8J, data_FE8U))
	elif data_FE7J >= IRAM_start and data_FE7J <= IRAM_end:
		if data_FE6 < IRAM_start or data_FE6 > IRAM_end:
			data_FE6 = 0
		if data_FE7U < IRAM_start or data_FE7U > IRAM_end:
			data_FE7U = 0
		if data_FE8J < IRAM_start or data_FE8J > IRAM_end:
			data_FE8J = 0
		if data_FE8U < IRAM_start or data_FE8U > IRAM_end:
			data_FE8U = 0
		f_IRAM.write("|%X|%X|%X|%X|%X|\n" % (data_FE6, data_FE7J, data_FE7U, data_FE8J, data_FE8U))
	elif data_FE7J >= RODATA_range["FE7J"]["start"] and data_FE7J <= RODATA_range["FE7J"]["end"]:
		if data_FE6 < RODATA_range["FE6"]["start"] or data_FE6 > RODATA_range["FE6"]["end"]:
			data_FE6 = 0
		if data_FE7U < RODATA_range["FE7U"]["start"] or data_FE7U > RODATA_range["FE7U"]["end"]:
			data_FE7U = 0
		if data_FE8J < RODATA_range["FE8J"]["start"] or data_FE8J > RODATA_range["FE8J"]["end"]:
			data_FE8J = 0
		if data_FE8U < RODATA_range["FE8U"]["start"] or data_FE8U > RODATA_range["FE8U"]["end"]:
			data_FE8U = 0
		f_RODATA.write("|%X|%X|%X|%X|%X|\n" % (data_FE6, data_FE7J, data_FE7U, data_FE8J, data_FE8U))

data_FE8J_list = data_match["FE8J"].keys()
data_FE8J_list.sort(key = lambda x : int(x))
for data_FE8J in data_FE8J_list:
	if data_match["FE8J"][data_FE8J].has_key("FE8U"):
		data_FE8U = max(zip(data_match["FE8J"][data_FE8J]["FE8U"].values(), data_match["FE8J"][data_FE8J]["FE8U"].keys()))[1]
		if data_FE8J >= WRAM_start and data_FE8J <= WRAM_end:
			if data_FE8U >= WRAM_start and data_FE8U <= WRAM_end:
				f_WRAM.write("|%X|%X|%X|%X|%X|\n" % (0, 0, 0, data_FE8J, data_FE8U))
		elif data_FE8J >= IRAM_start and data_FE8J <= IRAM_end:
			if data_FE8U >= IRAM_start and data_FE8U <= IRAM_end:
				f_IRAM.write("|%X|%X|%X|%X|%X|\n" % (0, 0, 0, data_FE8J, data_FE8U))
		elif data_FE8J >= RODATA_range["FE8J"]["start"] and data_FE8J <= RODATA_range["FE8J"]["end"]:
			if data_FE8U >= RODATA_range["FE8U"]["start"] and data_FE8U <= RODATA_range["FE8U"]["end"]:
				f_RODATA.write("|%X|%X|%X|%X|%X|\n" % (0, 0, 0, data_FE8J, data_FE8U))
		
f_WRAM.close()
f_IRAM.close()
f_RODATA.close()
