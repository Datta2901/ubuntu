t = input()

t = int(t)

while  t > 0 :
   
    size = int(input())
    answer = size
    while size > 0 :
        a = input()
        size = size - 1
    while answer > 0 :   
        print(2 ** answer - 1)
        answer = answer - 1
    t = t - 1