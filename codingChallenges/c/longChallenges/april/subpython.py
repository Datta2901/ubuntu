def evenOdd(i):
    i = int(i)
    if i%2 == 1 :
        return 1
    elif i % 4 == 0 :
        return -4
    else:
        return -2

def func():
    n = int(input())
    num = [evenOdd(i) for i in input().split()] 

    temp = []
    for i in num :
        if len(temp) ==0 :
            if i == 1:
                temp = [1]
            else:
                temp = [0,i]
        else:
            if i == 1 :
                if temp[-1] >= 0 :
                    temp[-1] += 1
                else:
                    temp.append(i)
            else:
                if temp[-1] < 0:
                    temp.append(0)
                temp.append(i)
    if temp[-1] < 0 :
        temp.append(0)

    sub = 0
    for i in range(len(temp)):
        if temp[i] == -2 :
            sub += 1 + temp[i-1] + temp[i+1] + temp[i-1]*temp[i+1]
    print(int(((n*(n+1))/2) - sub))
#testcases
for i in range(int(input())):
    func()
