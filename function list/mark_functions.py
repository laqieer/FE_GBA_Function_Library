# mark functions in the game
# by laqieer
# 2018-11-13

import idautils
import json

def str_to_hex(s):
    return int(s, 16)

def get_game_title():
	return idaapi.get_ascii_contents(0x80000A0, 12, 0)
	
def get_game_code():
	return idaapi.get_ascii_contents(0x80000AC, 4, 0)
	
def get_game(game_info):
	for game, info in game_info.items():
		if info.has_key("title") and info.has_key("code") and get_game_title() == info["title"] and get_game_code() == info["code"]:
			return game
	return "undefined"
	
def delete_functions_in_data_segment(boundary):
	for f in idautils.Functions(boundary, BADADDR):
		idaapi.del_func(f)

def add_functions_in_code_segment(boundary):
	ea = 0x8000000
	while ea < boundary:
		ea = idaapi.find_not_func(ea, SEARCH_DOWN)
		idaapi.add_func(ea, BADADDR)

def add_RAM_func(ea):
	idc.SetReg(ea, "T", 0)
	idc.SetReg(ea + 2, "T", 0)
	idc.MakeCode(ea)
	idc.MakeFunction(ea)
	
		
def add_RAM_functions(start, end, copyTo):
	# Copy functions from ROM to RAM
	ea_ROM = start
	ea_RAM = copyTo
	while ea_ROM < end:
		idc.PatchDword(ea_RAM, idc.Dword(ea_ROM))
		ea_ROM = ea_ROM + 4
		ea_RAM = ea_RAM + 4
	# Mark functions
	ea_ROM = start
	while ea_ROM < end:
		ea_ROM = idaapi.find_not_func(ea_ROM, SEARCH_DOWN)
		idaapi.add_func(ea_ROM, BADADDR)
	for f in idautils.Functions(start, end - 4):
		add_RAM_func(f - start + copyTo)
		
if __name__ == "__main__":
	with open("../function list/game_info.json","r") as load_f:
		game_info = json.load(load_f)
	game = get_game(game_info)
	if game == "undefined":
		print "Error: Unknown game: ", get_game_title(), get_game_code(), ". Please add it to game_info.json!"
	else: 
		print "Info: The game is ", game
		info = game_info[game]
		if info.has_key("boundary"):
			delete_functions_in_data_segment(str_to_hex(info["boundary"]))
			add_functions_in_code_segment(str_to_hex(info["boundary"]))
		else:
			print "Error: Boundary Undefined. Please set boundary between code segment and data segment in game_info.json!"
		if info.has_key("RAM_func_start") and info.has_key("RAM_func_end") and info.has_key("RAM_func_copyTo"):
			add_RAM_functions(str_to_hex(info["RAM_func_start"]), str_to_hex(info["RAM_func_end"]), str_to_hex(info["RAM_func_copyTo"]))
			