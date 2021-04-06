def func(x,ans):
    if x == 0:
        return 0
    else:
        return func(x-1,x+ans)

print(func())  
