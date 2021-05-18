import math
t = int(input())
while t > 0:
    n = int(input())
    answer = (2 ** n) % in(1e9 + 7)
    print(math.trunc(answer))
    t -= 1