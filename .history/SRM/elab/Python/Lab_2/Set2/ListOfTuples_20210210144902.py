n0033=int(input('enter no of rows : '))
numbers0033 = list(tuple(map(int,input().split())) for r in range(n))
res0033=[]
result0033 = lambda num10033,num20033,num300:(num10033+num20033)*2 + num300
for i in range(n0033):
    num10033=numbers[i][0]
    num20033=numbers[i][1]
    num300=numbers[i][2]
    
    res0033.append(result0033(num10033,num20033,num300))
print(res0033)