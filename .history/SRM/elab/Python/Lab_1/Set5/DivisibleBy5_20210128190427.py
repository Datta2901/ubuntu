sum = 0
for i in range(2,101):
    if( i % 5 == 0):
        sum += i

print("The sum of integers divisible by 5 " + str(sum))        