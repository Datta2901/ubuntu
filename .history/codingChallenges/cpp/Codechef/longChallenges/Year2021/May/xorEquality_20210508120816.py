import math
t = int(input())
while t > 0:
    n = int(input())
    answer = mathpow(2,n - 1,int(1e9 + 7))
    print(answer)
    t -= 1