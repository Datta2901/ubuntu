n0033=int(input('enter no of rows : '))
numbers0033 = list(tuple(map(int,input().split())) for r in range(n))
res0033=[]
result0033 = lambda num10033,num200,num3:(num10033+num200)*2 + num3
for i in range(n0033):
    num10033=numbers[i][0]
    num200=numbers[i][1]
    num3=numbers[i][2]
    
    res0033.append(result0033(num10033,num200,num3))
print(res0033)