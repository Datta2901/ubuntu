prime10034 = 0
for i0034 in range(2,1001):
    count = 0
    power = 0
    for j in range(2, i0034):
        if(i0034 % j == 0):
            count = count + 1
    if count == 0:
        prime = i0034
        while(prime >= 1):
            prime /= 2
            power += 1
        if(i0034 == 2 ** power - 1):
            print(i0034)   
       
        
    
    

