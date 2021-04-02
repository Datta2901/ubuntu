from turtle import *
import turtle
def filldirt(turt,x,y):
	turt.penup()
	turt.color=("black","grey")
	turt.goto(x,y)
	turt.pendown()
	turt.fill(True)
	for k in range(4):
		turt.forward(30)
		turt.right(90)
	turt.fill(False)
	turt.penup()

def cleanDirt(x,y):
	turt=Turtle()
	turt.hideturtle()
	turt.speed(10)
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

def drawempty(turt,x,y):
	turt.penup()
	turt.setx(x)
	turt.sety(y)
	for i in range(0,12):
		turt.pendown()
		turt.forward(300)
		turt.penup()
		turt.setx(x)
		turt.sety(300-i*30)
	turt.right(90)
	turt.penup()
	turt.setx(x)
	turt.sety(y)
	for i in range(0,12):
		turt.pendown()
		turt.forward(300)
		turt.penup()
		turt.setx(x+i*30)
		turt.sety(300)

def get_max(tileList):
	a=1
	for x,i in enumerate(tileList):
		for y,j in enumerate(i):
			if j==1:
				if(a<x+y):
					a=x+y
	return a
def drawpath(path,vaccum,pos_list,dirtlist,option=0):
	cost=0
	vaccum.penup()
	[x,y]=pos_list[(path[0][0],path[0][1])]
	if((path[0][0],path[0][1]) in dirtlist):
		x1,y1=dirtlist[(path[0][0],path[0][1])]
		cost+=2
		cleanDirt(x1,y1)
	x=x+15
	y=y-15
	vaccum.goto(x,y)
	vaccum.pendown()
	if(option==0):
		l=len(path)-1
	else:
		l=len(path)
	for i in range(1,l):
		[x,y]=pos_list[(path[i][0],path[i][1])]
		x=x+15
		y=y-15
		cost+=1
		if((path[i][0],path[i][1]) in dirtlist):
			x1,y1=dirtlist[(path[i][0],path[i][1])]
			cost+=2
			cleanDirt(x1,y1)
		vaccum.goto(x,y)
	if(option==0):	
		x1,y1=pos_list[(path[len(path)-1][0],path[len(path)-1][1])]
		x1=x1+15
		y1=y1-15	
		vaccum.goto(x,y1)
		cost+=abs((y1-y)/30)
		vaccum.goto(x1,y1)
		cost+=abs((x1-x)/30)
	# a1,b1=pos_list[(0,0)]
	# a1+=15
	# b1-=15
	# a2,b2=pos_list[(0,9)]
	# a2+=15
	# b2-=15
	# a3,b3=pos_list[(9,0)]
	# a3+=15
	# b3-=15
	# a4,b4=pos_list[(9,9)]
	# a4+=15
	# b4-=15
	# if(abs(a1-y)<abs(a3-y)):
	# 	vaccum.goto(a1,x)
	# 	if(abs(b1-x)<abs(b2-x)):
	# 		vaccum.goto(a4,b4)
	# 	else:
	# 		vaccum.goto(a3,b3)
	# elif(abs(a1-y)>=abs(a3-y)):
	# 	vaccum.goto(a3,x)
	# 	if(abs(b3-x)<abs(b4-x)):
	# 		vaccum.goto(a2,b2)
	# 	else:
	# 		vaccum.goto(a1,b1)

	return cost
def nearest_rest(lastx,lasty):
	if(abs(lastx-0)<=abs(lastx-9)):
		if(abs(lasty-0)<=abs(lasty-9)):
			restx=0
			resty=0
		else:
			restx=0
			resty=9
	else:
		if(abs(lasty-0)<=abs(lasty-9)):
			restx=9
			resty=0
		else:
			restx=9
			resty=9
	return [restx,resty]
def dirt_positions(tile_list):
	pos1={}
	pos2={}
	for i in range(10):
		for j in range(10):
			if(tile_list[i][j]==1):
				pos1[(i,j)]=[-150+(j)*30,300-(i)*30]
				pos2[(i,j)]=[150+(j)*30,300-(i)*30]

	return pos1,pos2
def tile_positions(tile_list):
	pos1={}
	pos2={}
	for i in range(10):
		for j in range(10):
			pos1[(i,j)]=[-150+(j)*30,300-(i)*30]
			pos2[(i,j)]=[150+(j)*30,300-(i)*30]

	return pos1,pos2

def dirt_gui(pos_list):
	turt=Turtle()
	turt.hideturtle()
	turt.speed(0)
	for i in pos_list.values():
		filldirt(turt,i[0],i[1])
		
def start_vaccum(x,y):
	m=Turtle()
	m.shape("vaccum_cleaner.gif")
	m.penup()
	m.pencolor("blue")
	m.setx(x)
	m.sety(y)
	return m
def make3_1_4():
	t=Turtle()
	turtle.setup(910,600)
	x=900
	y=600
	t.pensize(4)
	t.hideturtle()
	t.speed(0)
	t.penup()
	t.right(90)
	t.goto(-1*x//6,y//2)
	t.pendown()
	t.forward(y)
	t.penup()
	t.goto(-1*x//6,0)
	t.left(90)
	t.pendown()
	t.forward(2*x//3)
	t.penup()
	t.goto(x//6,y//2)
	t.right(90)
	t.pendown()
	t.forward(y)
	t.penup()
	t.left(90)
	t.goto(-1*x//2+10,y//2-10)
	for i in range(11):
		t.goto(-1*x//2+30,y//2-30-i*y//11)
		t.write("R"+str(i+1),True,align="center",font=("Arial", 12,"italic") )
	t=Turtle()
	t.hideturtle()
	t.speed(10)
	drawempty(t,150,300)
	t=Turtle()
	t.hideturtle()
	t.speed(10)
	drawempty(t,-150,300)
