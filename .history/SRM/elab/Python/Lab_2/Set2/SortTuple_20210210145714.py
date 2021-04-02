def sort_tuple():   
    .sort(key = lambda x: x[-1])   
    return    
n=int(input('enter no of rows : '))
numbers0017 = list(tuple(map(int,input().split())) for r in range(n))
print(sort_tuple(numbers0017))