n0033=(int)(input("Enter a number: "))
t0033=n0033
s0033=0
while t0033!=0:
    r=t0033%10
    s0033=s0033+r
    t0033=(int)(t0033/10)
print("Sum of digits: ",s0033,end="")