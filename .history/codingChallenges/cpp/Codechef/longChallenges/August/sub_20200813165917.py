t = input()
t = int(t)
while  t > 0 :
   
    size = int(input())
    answer = size
    a = []
    while size > 0 :
        b =  input()
        a.append(b)
        size = size - 1
    answer = answer - 1
    while answer >= 0 :   
        print(2 ** answer )
        answer = answer - 1
t = t - 1