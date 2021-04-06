def units():
    x003=int(input("Enter Units Consumed = "))
    return x003;
def details():
    custID=input("Customer ID = ")
    custName=input("Customer Name = ")
    monthName=input("Month of billing = ")
    return ;
def calc():
    x003=units()
    details()
    if x003<=199:
        y0037=x003*1.2
    if(y0037<100):
        print("bill = 100 rupees \n" )
    else:
        print("bill =", y0037 ," rupees\n")
    if x003>199 and x003<400:
        y0037=200*1.2 + (x003-200)*1.5
    if(y0037>400):
        print("bill = ", y0037+0.15*y0037, " rupees\n")
    else:
        print("bill = ", y0037, " rupees\n")
    if x003>=400 and x003<600 :
        y0037=199*1.2 + 200*1.5 + (x003-399)*1.8
        print("bill =", y0037+0.15*y0037, " rupees \n")
    if x003>250 :
        y0037=199*1.2 + 200*1.5 + 200*1.8 + (x003-599)*2
    print("bill = ", y0037+0.15*y0037, " rupees \n")
i=0
for i in range(5):
    print("\nBill for user ", i ,"\n")
    calc()