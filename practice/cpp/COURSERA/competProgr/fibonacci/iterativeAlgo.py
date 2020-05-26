def fib(n):
    T = [None] * (n + 1)
    T[0], T[1] = 0, 1

    for i in range(2, n + 1):
        T[i] = T[i - 1] + T[i - 2]

    return T[n]
num = int(input())    
print(fib(num))
# it is one of the efficient algorith but it takes more time