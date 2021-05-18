t = input()
while t > 0:
    n = int(input())
    answer = (2 ** n) % (1e9 + 7)
    t -= 1