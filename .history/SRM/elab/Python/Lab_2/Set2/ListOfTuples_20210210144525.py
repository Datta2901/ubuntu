#ques 2
#a = [a0,a1,a2.....] values of for 0th tuples,1st tuple respectively
#b = [b0,b1,b2.....] same for b and c too
#ans = [(a0 + b0)*2 + c0 , (a1 + b1)*2 + c1 , ..........]
a = [1,2,3,5]
b = [1,2,3,1]
c = [1,2,3,1]
list(map(lambda x, y, z : (x+y)*2+z, a,b,c))
#a=int(input(""))
#b=int(input(""))
#c=int(input(""))
#x = lambda a,b,c : (a+b)+c
#print(x(a,b,c))