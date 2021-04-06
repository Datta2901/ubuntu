def to_f(c):
    f=0
    f=c*1.800+32
    return f
def to_c(f):
    c=0
    c=(5/9)*(f-32)
    return c
lst10033=[21,34,12,14,15]
 
lst30033=[90,79,60,89,99]
print("The celsius temperatures are: \n",lst10033)
lst2=list(map(to_f,lst10033))
print("the converted fahreheit temperatures are: \n",lst2)
 
print("The fahrenheit temperatures are: \n",lst30033)
lst4=list(map(to_c,lst30033))
print("the converted celsius temperatures are: \n",lst4)