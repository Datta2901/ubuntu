t = int(input())
while  t > 0 :
    size = int(input())
    answer = size
    a  = [int(i) for i in  (input().split())]
    answer = answer - 1
    while answer >= 0 :   
        print(((2 ** answer) % 1e9+7),end = " ")
        answer = answer - 1
        
print(" ")        
t = t - 1