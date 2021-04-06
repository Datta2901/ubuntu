prime10034 = 0
for i0034 in range(2,100000):
    count0034 = 0
    power0034 = 0
    k = i0034 ** 0.5
    for j0034 in range(2, int(k)):
        if(i0034 % j0034 == 0):
            count0034 = count0034 + 1
    if count0034 == 0:
        prime0034 = i0034
        while(prime0034 >= 1):
            prime0034 /= 2
            power0034 += 1
        if(i0034 == 2 ** power0034 - 1):
            print(i0034)   
       
        
    
    


