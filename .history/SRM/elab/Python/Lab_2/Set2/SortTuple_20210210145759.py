def sort_tuple(tuple0033):   
    tuple0033.sort(key = lambda x: x[-1])   
    return tuple0033   
number0033=int(input('Enter number of rows : '))
listOfTuples = list(tuple(map(int,input().split())) for r in range(number0033))
print(sort_tuple(listOfTuples))