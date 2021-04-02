hof = lambda x, f1 : x + f1(x)
print(hof(3,lambda x : x * x))

a = range(5)
b = range(10)
print(zip(a,b)) # works un