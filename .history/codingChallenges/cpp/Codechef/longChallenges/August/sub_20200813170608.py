t = int(input())
while  t > 0 :
    size = int(input())
    answer = size
    a = []
    for i in range (0,size):
        a  = [int(i) for i in range(input().split())]input()
    answer = answer - 1
    while answer >= 0 :   
        print(2 ** answer )
        answer = answer - 1
t = t - 1