a = [1,2,3,5]
b = [1,2,3,1]
c = [1,2,3,1]
list(map(lambda x, y, z : (x+y)*2+z, a,b,c))

x = lambda a,b,c : (a+b)+c
print(x(a,b,c))