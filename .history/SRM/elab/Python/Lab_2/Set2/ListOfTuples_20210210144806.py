n0=int(input('enter no of rows : '))
numbers = list(tuple(map(int,input().split())) for r in range(n))
res0=[]
result0 = lambda num1,num2,num3:(num1+num2)*2 + num3
for i in range(n):
    num1=numbers[i][0]
    num2=numbers[i][1]
    num3=numbers[i][2]
    
    res0.append(result0(num1,num2,num3))
print(res0)