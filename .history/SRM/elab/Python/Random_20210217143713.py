def units():
    x0033=int(input("Enter Units Consumed = "))
    return x0033;
def details():
    custID=input("Customer ID = ")
    custName=input("Customer Name = ")
    monthName=input("Month of billing = ")
    return ;
def calc():
    x0033=units()
    details()
    if x0033<=199:
        y0033=x0033*1.2
    if(y0033<100):
        print("bill = 100 rupees \n" )
    else:
        print("bill =", y0033 ," rupees\n")
    if x0033>199 and x0033<400:
        y0033=200*1.2 + (x0033-200)*1.5
    if(y0033>400):
        print("bill = ", y0033+0.15*y0033, " rupees\n")
    else:
        print("bill = ", y0033, " rupees\n")
    if x0033>=400 and x0033<600 :
        y0033=199*1.2 + 200*1.5 + (x0033-399)*1.8
        print("bill =", y0033+0.15*y0033, " rupees \n")
    if x0033>250 :
        y0033=199*1.2 + 200*1.5 + 200*1.8 + (x0033-599)*2
    print("bill = ", y0033+0.15*y0033, " rupees \n")
i=0
for i in range(5):
    print("\nBill for user ", i ,"\n")
    calc()