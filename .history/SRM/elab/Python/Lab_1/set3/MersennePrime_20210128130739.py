
valid = 1
for i in range(2,1001):
    count = 0
    valid = 1
    for j in range(2, i):
        if(i % j == 0):
            count = count + 1
    if i == prime10034 or i == prime20034:
        continue;
    if count == 0:
        prime20034 = prime10034
        prime10034 = i
        if(abs(prime20034 - prime10034) == 2):
            print(prime20034,prime10034)
        
    
    


