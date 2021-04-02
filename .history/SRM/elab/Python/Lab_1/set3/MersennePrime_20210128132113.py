prime10034 = 0
for i0034 in range(2,100000):
    count0034 = 0
    power = 0
    k = i0034 ** 0.5
    for j0034 in range(2, k):
        if(i0034 % j0034 == 0):
            count0034 = count0034 + 1
    if count0034 == 0:
        prime = i0034
        while(prime >= 1):
            prime /= 2
            power += 1
        if(i0034 == 2 ** power - 1):
            print(i0034)   
       
        
    
    


