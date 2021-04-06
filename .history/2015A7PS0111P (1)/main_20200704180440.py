from Gen import generate,printgrid
from gui import get_max,nearest_rest,tile_positions,drawpath,make3_1_4,start_vaccum,filldirt,cleanDirt,drawempty,dirt_positions,dirt_gui
import sys
import copy
from turtle import *
import turtle
from uninformed_search import node,action,buildTree,goaltest,equal_,idfs,heuristic_1
from heuristic import idfs2,checkstate,cleanDirt_heuristic,draw_heuristic1
def main():

	print ("input percentage of dirt")
	percent=int(raw_input())
	window=Screen()
	tileList=generate(percent)
	printgrid(tileList)
	# tileList=[[0 for i in range(10)] for j in range(10)]
	# # tileList[1][1]=1
	# # tileList[1][3]=1
	# # tileList[3][2]=1
	# tileList[9][9]=1
	posList1,posList2=dirt_positions(tileList)
	tilePos1,tilePos2=tile_positions(tileList)
	
	a=get_max(tileList)
	
	make3_1_4()
		
	
	dirt_gui(posList1)
	dirt_gui(posList2)

	screen = turtle.Screen()
	screen.register_shape("vaccum_cleaner.gif")
	screen.addshape("vaccum_cleaner.gif")
	vac1=start_vaccum(-135,285)
	vac1.pensize(10)
	vac2=start_vaccum(165,285)
	vac3=start_vaccum(165,285)
		
	draw_heuristic1(copy.deepcopy(tileList),tilePos2,posList2,vac3)
	printgrid(tileList)
	posList1,posList2=dirt_positions(tileList)
	l=[tileList,[0,0],-1]
	tree=node(l)
	for i in range(a,100,1):
		print(i,"------------------------------------------")
		print(i,"------------------------------------------")
		print(i,"------------------------------------------")
		print(i,"------------------------------------------")
		ans=idfs(i,tree)
		if(ans!=None):
			break
	path=[]
	par=ans
	lastx,lasty=ans.state[1]
	while(par!=None):
		path.insert(0,par.state[1])
		par=par.parent
	path.append(nearest_rest(lastx,lasty))
	print(path)
	

	print(ans)
	drawpath(path,vac1,tilePos1,posList1)
	
	# turtle.turtle.mainloop()
	


	window.exitonclick()


if __name__ == '__main__':

	main()
	# window.exitonclick()