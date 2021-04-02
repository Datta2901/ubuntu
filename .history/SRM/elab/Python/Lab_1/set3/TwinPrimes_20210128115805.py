prime10034 = 2
prime20034 = 0
for i in range(2,1001):
    count = 0
    for j in range(2, i):
        if(i % j == 0):
            count = count + 1
    
    if count == 0:
        prime20034 = prime10034
        prime10034 = i
    if(prime20034 - prime10034 == 2):
        print(prime10034,prime20034)
        