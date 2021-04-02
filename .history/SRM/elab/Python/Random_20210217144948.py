n0033=(int)(input("Enter a number: "))
t003=n0033
s0014=0
while t003!=0:
    r=t003%10
    s0014=s0014+r
    t003=(int)(t003/10)
print("Sum of digits: ",s0014,end="")