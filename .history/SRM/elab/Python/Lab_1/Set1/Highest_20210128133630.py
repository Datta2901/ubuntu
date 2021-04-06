name = input("Enter the name of the employee : ")
salary = 0
Average = 0
Highest = 0
Lowest = 1e10
NameLowest = ""
NameHighest = ""
while(name != "End"):
    salary = int(input())
    Average += salary
    if(salary > Highest):
        Highest = salary
print("Highest salary employee is " + NameError + " with amount " + str(Highest)) 
        NameHighest = name
    if(Lowest < salary):
        Lowest = salary
        NameLowest = name        
        
       
        