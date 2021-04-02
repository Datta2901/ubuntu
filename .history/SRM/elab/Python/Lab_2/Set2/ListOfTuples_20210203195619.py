final_list = [] 
line = input("Enter the list of tuples:\n") 
while(line != ‘’): 
	final_list.append(tuple(line.split())) 
	line = input() 
 
print(final_list) 