t = int(input())

def getBinary(num):
    ans = []
    while(num > 0):
        ans.append(num%2)
        num=num//2
    return ans[::-1]

def getDecimal(num):
    sum = 0
    for i in num:
        sum*=2
        sum += i
    return sum

def IsFirstGreaterThanSecond(num1,num2):
    if len(num1) > len(num2):
        return True
    elif len(num2) >len(num1):
        return False
    
    for i in range(len(num1)):
        if num1[i] == num2[i]:
            continue
        elif num1[i] == 1:
            return True
        return False
    return False
def cal(a, b, c):
    if (a & c) == 0 or (b & c) == 0 :
        print(0)
        return
    print(c)

def fValue(a,b,c):
    return (a & c) * (b & c)

while(t):
    t-=1
    a,b,l,r =[int(i) for i in input().split(" ")]

    c = a | b

    if c <= r:
        cal(a,b,c)
        continue

    
    binC = getBinary(c)
    binR = getBinary(r)

    sizeDiff = len(binC) - len(binR)
    if sizeDiff > 0 :
        binC = binC[sizeDiff:]

    decC = getDecimal(binC)
    decR = getDecimal(binR)
    if IsFirstGreaterThanSecond(binR, binC):
        cal(a,b,decC)
        continue

    tempAns = decC & decR
    binC.pop(0)

    decC = getDecimal(binC)
    if fValue(a,b,tempAns) > fValue(a,b,decC):
        print(tempAns)
        continue

    cal(a,b,decC)

