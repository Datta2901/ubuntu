print("The Perfect numbers in 1 - 10000 ")
for i0034 in range(1,10000):
    sum0034 = 0
    for divisors0034 in range(1,i0034):
        if(i0034 % divisors0034 == 0):
            sum0034 += divisors0034
    if(i0034 == sum0034):   
        print(i0034)       