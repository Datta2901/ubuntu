prime10034 = 2
prime20034 = 0
valid = 1
for i in range(2,1001):
    count = 0
    valid = 1
    for j in range(2, i):
        if(i % j == 0):
            count = count + 1
        if(i == prime20034 or i == prime10034):
            count = 12
            break;
    if count == 0 and valid:
        prime20034 = prime10034
        prime10034 = i
    if(abs(prime20034 - prime10034) == 2):
        print(prime20034,prime10034)
        