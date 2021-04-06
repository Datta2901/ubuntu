lst = []
lst1 = []
n= int(input("enter the number of elements"))

for i in range(0,n):
    ele = (input())
    lst.append(ele)
    

max= -1e

for x in range(0,n):
    if(x>max):
        max=x

for y in range(0,max+1):
    lst1.append(-1)

for i in range(0,n):
    lst1[lst[i]] += 1
    
for y in range(0,max):
    if(lst1[y]>=0):
        print(y)