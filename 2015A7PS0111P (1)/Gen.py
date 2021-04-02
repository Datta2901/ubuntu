import random as rand
import sys
def generate(percent):
	odd=[1 for i in range(percent)]
	even=[0 for i in range(100-percent)]
	tiles=odd+even
	rand.seed()
	ans=[[-1 for i in range(10)] for j in range(10)]
	for i in range(10):
		for j in range(10):
			a=rand.randrange(len(tiles))
			ans[i][j]=tiles[a]
			tiles.pop(a)
	return ans
def printgrid(tiles):
	# for i in tiles:
	# 	for j in i:
	# 		sys.write.out(str(j))
	# 		sys.write.out(" ")
		print(' ')
