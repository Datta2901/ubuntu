import math
t = int(input())
while t > 0:
    n = int(input())
    answer = (2 ** n) % int(1e9 + 7)
    print(answer)
    t -= 1