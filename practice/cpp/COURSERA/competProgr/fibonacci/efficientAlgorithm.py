def fib(n):
    if n <= 1:
      return n

    previous, current = 0, 1
    for _ in range(n - 1):
        new_current = previous + current
        previous, current = current, new_current

    return current
    
num = int(input())
print(num)    
print(fib(num))
# this is the time and memory efficent algorithm for fibonacii series 