T = dict()

def fib(n):
    if n not in T:
        if n <= 1:
            T[n] = n
        else:
          T[n] = fib(n - 1) + fib(n - 2)
    
    return T[n]
num = int(input("enter the number : "))
print(fib(num))
# which has efficiency upto 100 
# for larger input the code fails