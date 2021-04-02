wage_0033=float(input('Wages per month:'))
hour_00=int(input('Number of hours worked in a month: '))
payot_0044=0
if(hour_00>40):
overtime_0044=hour_00-40
payot_0044=overtime_0044*(1.5*wage_0033)
tot_sal_0044=payot_0044+(wage_0033*40)
print(payot_0044)
print("the total"+str(tot_sal_0044))