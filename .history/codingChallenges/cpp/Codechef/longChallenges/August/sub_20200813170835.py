t = int(input())
while  t > 0 :
    size = int(input())
    answer = size
    a  = [int(i) for i in rangeint((input().split()))]
    answer = answer - 1
    while answer >= 0 :   
        print(2 ** answer,end = " ")
        answer = answer - 1
t = t - 1