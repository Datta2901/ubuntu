import random
TicketNumber0033  = input("Enter Your lottery ticket number : ")
LotteryWin0033 = random.randint(100,999)
if(TicketNumber0033 == LotteryWin0033):
    print("You won $10,000")
else:
    ok10033 = 1
    ok20033 = 1
    ok30033 = 1
    count0033 = 0
    RequiredDigits0033 = ""
    Duplicate0033 = TicketNumber0033
    # Getting t 
    while(Duplicate0033 > 0):
        RequiredDigits0033 += str(Duplicate0033 % 10)
        Duplicate0033 /= 10
    
    # comparing the digits
    for digit0033 in str(TicketNumber0033):
        if digit0033 == RequiredDigits0033[0]  and ok10033:
            count0033 += 1
            ok10033 = 0
        if digit0033 == RequiredDigits0033[1]  and ok20033:
            count0033 += 1
            ok20033 = 0  
        if digit0033 == RequiredDigits0033[2] and ok30033:
            count0033 += 1
            ok30033 = 0     
    
    if count0033 == 3:
        print("You won $3,000")    
    elif count0033 == 1:
        print("You won $1,000")  
    else:
        print("You lost")            
    
       
            
        
          