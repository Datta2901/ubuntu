def sort_tuple(tup):   
    tup.sort(key = lambda x: x[-1])   
    return tup   
n=int(input('enter no of rows : '))
numbers0017 = list(tuple(map(int,input().split())) for r in range(n))
print(sort_tuple(numbers0017))