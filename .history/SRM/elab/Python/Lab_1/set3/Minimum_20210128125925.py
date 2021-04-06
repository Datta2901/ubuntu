Size0034 = int(input("Enter the number of students"))
print("Enter the numbers")
max = 0
SecondMax = 0
for student in range(0,Size0034):
    number = int(input())
    if(number > max):
        SecondMax = max
        max = number
        
print("Highest score is" + str(max))
print("")        
        
    
    