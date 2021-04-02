def to_f(c):
    f=0
    f=c*1.800+32
    return f
def to_c(f):
    c=0
    c=(5/9)*(f-32)
    return c
lst1=[21,34,12,14,15]
 
lst3=[90,79,60,89,99]
print("The celsius temperatures are: \n",lst1)
lst2=list(map(to_f,lst1))
print("the converted fahreheit temperatures are: \n",lst2)
 
print("The fahrenheit temperatures are: \n",lst3)
lst4=list(map(to_c,lst3))
print("the converted celsius temperatures are: \n",lst4)