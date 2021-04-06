def sort_tuple(tuple0033):   
    tuple0033.sort(key = lambda x: x[-1])   
    return tuple0033   
n=int(input('enter no of rows : '))
numbers0017 = list(tuple(map(int,input().split())) for r in range(n))
print(sort_tuple(numbers0017))