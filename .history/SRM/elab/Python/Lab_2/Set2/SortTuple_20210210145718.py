def sort_tuple(tuple00):   
    tuple00.sort(key = lambda x: x[-1])   
    return tuple00   
n=int(input('enter no of rows : '))
numbers0017 = list(tuple(map(int,input().split())) for r in range(n))
print(sort_tuple(numbers0017))