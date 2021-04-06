def to_f0033(c0033):
    f0033=0
    f0033=c0033*1.800+32
    return f0033
def to_c0033(f0033):
    c0033=0
    c0033=(5/9)*(f0033-32)
    return c0033
lst10033=[21,34,12,14,15]
 
lst30033=[90,79,60,89,99]
print("The celsius temperatures are: \n",lst10033)
lst20033=list(map(to_f0033,lst10033))
print("the converted fahreheit temperatures are: \n",lst20033)
 
print("The fahrenheit temperatures are: \n",lst30033)
lst40033=list(map(to_c0033,lst30033))
print("the converted celsius temperatures are: \n",lst40033)