wage_0033=float(input('Wages per month:'))
hour_0033=int(input('Number of hours worked in a month: '))
payot_0033=0
if(hour_0033>40):
    overtime_0033=hour_0033-40
    payot_0033=overtime_0033*(1.5*wage_0033)
    tot_sal_0033=payot_0033+(wage_0033*40)
print(payot_0033)
print("the total"+str(tot_sal_0033))