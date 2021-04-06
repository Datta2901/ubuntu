valid0033 = 1
print("Enter the numbers if you want : ")
max0033 = 0
maxfre0033 = 0
while valid0033 != 0:
    valid0033 = int(input())
    if(valid0033 > max0033):
       max0033 = valid0033
       maxfre0033 = 1
    elif valid0033 == max0033:
        maxfre0033 += 1 
          
print("Greatest number is " + str(max0033) + " with occurences " + str(maxfre0033))          
       
    
