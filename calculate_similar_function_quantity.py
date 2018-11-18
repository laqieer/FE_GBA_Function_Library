#!/usr/bin/python
# -*- coding: UTF-8 -*-

# calculate quantity of similar functions between two games
# Usage: calculate_similar_function_quantity.py game1 game2
# by laqieer
# 2018/11/18

import sys

if not len(sys.argv) == 3:
	print("Usage: %s game1 game2" % sys.argv[0])
	sys.exit()
	
game1 = sys.argv[1]
game2 = sys.argv[2]

# read data
with open('functions.md', 'r') as f1:
	rows = f1.readlines()
	games = rows[2].split("|")
	g1 = games.index(game1)
	g2 = games.index(game2)
	q = 0
	for row in range(4,len(rows)):
		col = rows[row].split("|")
		if col[g1] != "0" and col[g2] != "0":
			q = q + 1
		
# get total function quantity in a game
q1 = len(open('function list/%s Functions.md' % game1, 'r').readlines()) - 4
q2 = len(open('function list/%s Functions.md' % game2, 'r').readlines()) - 4

print("%s has %d functions" % (game1, q1))
print("%s has %d functions" % (game2, q2))
print("%s and %s have %d similar functions" % (game1, game2, q))