wage_0033=float(input('Wages per month:'))
hour_0033=int(input('Number of hours worked in a month: '))
payot_=0
if(hour_0033>40):
overtime_=hour_0033-40
payot_=overtime_*(1.5*wage_0033)
tot_sal_=payot_+(wage_0033*40)
print(payot_)
print("the total"+str(tot_sal_))