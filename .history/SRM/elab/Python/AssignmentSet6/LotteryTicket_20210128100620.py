TicketNumber0033  = input("Enter Your lottery ticket number")
if(TicketNumber0033 == "123"):
    print("You won  $10,000")
else:
    ok10033 = 1,ok20033 = 1,ok30033 = 1
    count = 0
    for digit0033 in TicketNumber0033:
        if digit0033 == 1 and ok10033:
            count++
            ok10033 = 0
        if digit0033 == 2 and ok20033:
            count++
            ok20033 = 0  
        if digit0033 == 3 and ok30033:
            count++
            ok30033 = 0     
            
    
       
            
        
          