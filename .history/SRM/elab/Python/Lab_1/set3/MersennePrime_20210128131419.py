prime10034 = 0
for i0034 in range(2,1001):
    count00 = 0
    power = 0
    for j in range(2, i0034):
        if(i0034 % j == 0):
            count00 = count00 + 1
    if count00 == 0:
        prime = i0034
        while(prime >= 1):
            prime /= 2
            power += 1
        if(i0034 == 2 ** power - 1):
            print(i0034)   
       
        
    
    


