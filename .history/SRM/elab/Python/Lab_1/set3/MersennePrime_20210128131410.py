prime10034 = 0
for i00 in range(2,1001):
    count = 0
    power = 0
    for j in range(2, i00):
        if(i00 % j == 0):
            count = count + 1
    if count == 0:
        prime = i00
        while(prime >= 1):
            prime /= 2
            power += 1
        if(i00 == 2 ** power - 1):
            print(i00)   
       
        
    
    


