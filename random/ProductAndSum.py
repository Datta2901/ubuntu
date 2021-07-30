n = int(input())
lt = []
sum = 0
product = 1
for i in range(0,n):
    inp = int(input())
    sum += inp
    product *= inp  
print(sum)
print(product)