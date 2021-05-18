import math
t = int(input())
while t > 0:
    n = int(input())
    answer = math.pow(2,(n - 1))
    print(answer % int(1e9 + 7))
    t -= 1