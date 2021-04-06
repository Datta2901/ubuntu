def sort_tuple(tup0017):   
    tup0017.sort(key = lambda x: x[-1])   
    return tup0017   
n=int(input('enter no of rows : '))
numbers0017 = list(tuple(map(int,input().split())) for r in range(n))
print(sort_tuple(numbers0017))