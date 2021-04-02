size = int(input("Enter the size of the array : "))
numbers = []
freq = {}
print("Enter the elements ")
for i in range(0,size):
    ele = int(input())
    if (ele) in freq:
        freq[ele] = freq[ele] + 1
    else:
        freq[ele] = 1    
for value,key in freq.items():
    if((-value) in freq and freq[-value] > 0):
        print((-value,value),end = ',')
        freq[-value] -= 1
        freq[value] -= 1

print(" ")            




    
    

