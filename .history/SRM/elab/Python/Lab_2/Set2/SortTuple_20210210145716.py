def sort_tuple(tupp):   
    tupp.sort(key = lambda x: x[-1])   
    return tupp   
n=int(input('enter no of rows : '))
numbers0017 = list(tuple(map(int,input().split())) for r in range(n))
print(sort_tuple(numbers0017))