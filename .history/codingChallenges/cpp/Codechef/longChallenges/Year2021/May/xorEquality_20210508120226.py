import math
t = int(input())
while t > 0:
    n = int(input())
    answer =  (n - 1)) % int(1e9 + 7)
    print(answer)
    t -= 1