import sys
from turtle import *
from gui import drawpath,nearest_rest
def idfs2(curx,cury,state):
	min=sys.maxint
	minx=curx
	miny=cury
	for i in range(10):
		for j in range(10):
			if(state[i][j]==1):
				print("here")
				if(abs(curx-i)+abs(cury-j) < min):
					min=(abs(curx-i)+abs(cury-j))
					minx=i
					miny=j
	return minx,miny

def checkstate(state):
	for i in state:
		for j in i:
			if(j==1):
				return False
	return True
def cleanDirt_heuristic(x,y):
	turt=Turtle()
	turt.hideturtle()
	turt.speed(0)
	turt.penup()
	turt.goto(x,y)
	turt.color('black',"yellow")
	turt.pendown()
	turt.fill(True)
	for k in range(4):
		turt.forward(30)
		turt.right(90)
	turt.fill(False)
	turt.penup()

def draw_heuristic1(state,poslist,dirtlist,vaccum):
	cost=0
	if(state[0][0]==1):
		cleanDirt_heuristic(poslist[(0,0)][0],poslist[(0,0)][1])
		cost+=1
		state[0][0]=0
	x,y=0,0
	print(poslist)
	l=[[0,0]]
	while(not(checkstate(state))):
		nextx,nexty=idfs2(x,y,state)
		print(nextx,nexty)
		vir_nextx,vir_nexty=poslist[(nextx,nexty)]
		vir_x,vir_y=poslist[(x,y)]
		vaccum.pensize(3)
		vaccum.color("green")
		vaccum.penup()
		vaccum.goto(vir_x+15,vir_y-15)
		vaccum.pendown()
		print(vir_x,vir_y,vir_nextx,vir_nexty)
		vaccum.goto(vir_x+15,vir_nexty-15)
		vaccum.goto(vir_nextx+15,vir_nexty-15)
		
		# go(vir_x,vir_y,vir_nextx,vir_nexty,vaccum)
		cost+=abs(vir_x-vir_nextx)//15+abs(vir_y-vir_nexty)//15
		x,y=nextx,nexty
		if(state[x][y]==1):
			cost+=1
			# cleanDirt_heuristic(poslist[(x,y)][0],poslist[(x,y)][1])
			state[x][y]=0
		l.append([x,y])
	nextx,nexty=nearest_rest(x,y)
	vir_nextx,vir_nexty=poslist[(nextx,nexty)]
	vir_x,vir_y=poslist[(x,y)]
	vaccum.penup()
	vaccum.goto(vir_x+15,vir_y-15)
	vaccum.pendown()
	vaccum.goto(vir_x+15,vir_nexty-15)
	vaccum.goto(vir_nextx+15,vir_nexty-15)
	cost+=abs(vir_x-vir_nextx)//15+abs(vir_y-vir_nexty)//15
	print(l)
	print cost
	return cost
	# drawpath(l,vaccum,poslist,dirtlist,1)
def go(curx,cury,finalx,finaly,vaccum):
	vaccum.penup()
	curx=curx+15
	cury=cury-15
	finaly=finaly-15
	finalx=finalx+15
	vaccum.pendown()
	vaccum.forward(abs(finalx-curx))
	vaccum.right(90)
	vaccum.forward(abs(finaly-cury))

