print("fruits are apple, banana, cherry")
fruits = ["apple", "banana", "cherry"]
for x in fruits:
  print(x)
  if x == "banana":
    break
fruits = ["apple", "banana", "cherry"]
for x in fruits:
  if x == "banana":
    break
  print(x)
  
fruits = ["apple", "banana", "cherry"]
for x in fruits:
    if x == "banana":
        continue
    print(x)

print("for x in range(6):  print(x)")    
for x in range(6):  print(x)
print("for x in range(2, 6):  print(x)")
for x in range(2, 6):  print(x)
print("for x in range(2, 30, 3):  print(x)")
for x in range(2, 30, 3):  print(x)
print("is 20 greater than 15?")
i = 20; 
if (i < 15): 
    print ("i is smaller than 15") 
    print ("i'm in if Block") 
else: 
    print (i," is greater than 15") 
    print ("i'm in else Block") 
    print ("i'm not in if and not in else Block")
    
num1 = 23
num2 = 15
big = num1 if num1 > num2 else num2
print (" the biggest number is " , big )
i = 1 
print("numbers")
while i < 6: 
    print(i) 
    i += 1
    
fruits = ["apple", "banana", "cherry"]
print("Fruits in the container")
for x in fruits:
   print(x)
print("Letters in banana")
for x in "banana":
    print(x)
for x in range(6):  print(x)