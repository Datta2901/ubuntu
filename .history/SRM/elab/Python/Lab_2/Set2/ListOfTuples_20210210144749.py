n0017=int(input('enter no of rows : '))
numbers = list(tuple(map(int,input().split())) for r in range(n))
res0017=[]
result0017 = lambda num1,num2,num3:(num1+num2)*2 + num3
for i in range(n):
    num1=numbers[i][0]
    num2=numbers[i][1]
    num3=numbers[i][2]
    
    res0017.append(result0017(num1,num2,num3))
print(res0017)