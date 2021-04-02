import sys
import copy
# from utils import Stack
#state[[environment][curpos][path]]
class node:
	def __init__(self,state,par=None,i=-1):
		self.state=state
		self.children=[]
		self.parent=par
		self.pathtaken=i
	def addChildren(self,tree):
		tree.parent=self
		self.children+=[tree]
	def __repr__(self):
		return str(self.state)+str(len(self.children))
def action(s,i,err):
	state=copy.deepcopy(s)
	# #print(state)
	
	if (i==0):
		state[1][1]=err[state[1][1]+1]   #down
		state[2]=i
	if (i==1):
		state[1][1]=err[state[1][1]-1]   #up
		state[2]=i
	if (i==2):
		state[1][0]=err[state[1][0]-1]   #left
		state[2]=i
	if (i==3):
		state[1][0]=err[state[1][0]+1]   #right
		state[2]=i
	if state[0][state[1][0]][state[1][1]]==1:
		state[0][state[1][0]][state[1][1]]=0

	return node(state)

def buildTree(tree):
	err={10:9,-1:1,1:1,2:2,3:3,4:4,5:5,6:6,7:7,8:8,9:9,0:0}
	s=tree.state
	if(s[1][0]==0 and s[1][1]==0):
		if(s[2]!=2):
			tree.addChildren(action(s,3,err))
		if(s[2]!=1):
			tree.addChildren(action(s,0,err))
	elif(s[1][0]==9 and s[1][1]==9):
		if(s[2]!=3):
			tree.addChildren(action(s,2,err))
		if(s[2]!=0):
			tree.addChildren(action(s,1,err))
	elif(s[1][0]==9 and s[1][1]==0):
		if(s[2]!=2):
			tree.addChildren(action(s,3,err))
		if(s[2]!=0):
			tree.addChildren(action(s,1,err))
	elif(s[1][0]==0 and s[1][1]==9):
		if(s[2]!=3):
			tree.addChildren(action(s,2,err))
		if(s[2]!=1):
			tree.addChildren(action(s,0,err))
	else:
		if(s[2]!=3):
			tree.addChildren(action(s,2,err))
		if(s[2]!=1):
			tree.addChildren(action(s,0,err))
		if(s[2]!=2):
			tree.addChildren(action(s,3,err))
		if(s[2]!=0):
			tree.addChildren(action(s,1,err))
	return tree

def goaltest(s):

	state=s[0]
	#print(state)
	test=0
	for i in state:
		test+=sum(i)
		if(test!=0):
			return 0
	return 1

def equal_(s1,s2):
	for i in range(10):
		for j in range(10):
			if s1[0][i][j]!=s2[0][i][j]:
				return False
	if(s1[1][0]==s2[1][0] and s1[1][1]==s2[1][1]):
		return True
	return False

def idfs(max_depth,tree,child_list=[]):
	par=tree.parent
	#print(tree)
	if(tree.state[0][tree.state[1][0]][tree.state[1][1]]==1):
		tree.state[0][tree.state[1][0]][tree.state[1][1]]=0
	while(par!=None):
		if(equal_(par.state,tree.state)):
			# print("here")
			return None
		par=par.parent
	if goaltest(tree.state):
		#print('goalTest Reached')
		return tree
	#print(max_depth,"max_depth")
	if max_depth==0:
		#print('notfound')
		return None
	else:
		flag=0
		# #print(max_depth)
		if len(tree.children)==0:
			# #print(max_depth)
			tree=buildTree(tree)
			#print(tree.children)
		for child in tree.children:
			res=idfs(max_depth-1,child)
			# #print(max_depth)
			if res!=None:
				return res



# def iterative_deepening_search(problem):
#     for depth in range(sys.maxsize):
#         result = depth_limited_search(problem, depth)
#         if result != 'cutoff':
#             return result

# def recursive_dls(node, problem, limit):
#         if problem.goal_test(node.state):
#             return node
#         elif limit == 0:
#             return 'cutoff'
#         else:
#             cutoff_occurred = False
#             for child in node.expand(problem):
#                 result = recursive_dls(child, problem, limit - 1)
#                 if result == 'cutoff':
#                     cutoff_occurred = True
#                 elif result is not None:
#                     return result
#             return 'cutoff' if cutoff_occurred else None

# def depth_limited_search(problem, limit=50):
#     return recursive_dls(Node(problem.initial), problem, limit)

def heuristic_1(vacc,poslist):
	posx=0
	posy=0
	err={10:9,-1:1,1:1,2:2,3:3,4:4,5:5,6:6,7:7,8:8,9:9,0:0}
	num=[i for i in range(100)]
	neighbour={err[posx-1]*10+err[posy],err[posx+1]*10+err[posy],err[posx]*10+err[posy-1],err[posx]*10+err[posy+1],err[posx-1]*10+err[posy-1],err[posx+1]*10+err[posy+1],err[posx-1]*10+err[posy+1],err[posx+1]*10+err[posy-1]}
	neighbourlist=list(neighbour)
	dirtlist=[]
