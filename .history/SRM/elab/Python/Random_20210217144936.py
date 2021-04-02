n0=(int)(input("Enter a number: "))
t=n0
s0014=0
while t!=0:
    r=t%10
    s0014=s0014+r
    t=(int)(t/10)
print("Sum of digits: ",s0014,end="")