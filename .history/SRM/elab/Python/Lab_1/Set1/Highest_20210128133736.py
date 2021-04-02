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
        NameHighest = name
    if(Lowest < salary):
        Lowest = salary
        NameLowest = name        
        
print("Highest salary employee is " + Name + " with amount " + str(Highest)) 
print("Lowest salary employee is " + NameLowest + " with amount " + str(Highest)) 


       
       
        