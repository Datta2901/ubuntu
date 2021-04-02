numbersLessThan110033= {0:'zero',1: 'One', 2: 'Two', 3: 'Three', 4: 'Four', 5: 'Five', 6: 'Six', 7: 'Seven', 8: 'Eight', 9: 'Nine', 10: 'Ten', 11: 'Eleven', 12: 'Twelve', 13: 'Thirteen', 14: 'Fourteen', 15: 'Fifteen', 16: 'Sixteen', 17: 'Seventeen', 18: 'Eighteen', 19: 'Nineteen'}
someFIxedNumbers0033 = {2:'Twenty', 3:'Thirty',4: 'Forty', 5:'Fifty',6: 'Sixty', 7:'Seventy', 8:'Eighty', 9:'Ninety'}
SomeStandardNumbers0033 = {1:'One hundred ',2:'Two hundred ', 3:'Three hundred ',4: 'Four hundred ', 5:'Five hundred ',6: 'Six hundred ', 7:'Seven hundred ', 8:'Eight hundred ', 9:'Nine hundred '}
number0033=int(input("Enter a number less than 1000:"))
if(number0033<=19):
    print(numbersLessThan110033[number0033],end = "  ")
elif(number0033>=20)and(number0033<100):
    coe0033=int(number0033/10)
    print(someFIxedNumbers0033[coe0033],end = " ")
    coe00332=number0033%10
    if(coe00332 != 0):
        print(numbersLessThan110033[coe00332],end = " ")
elif(number0033>=100)and(number0033<1000):
    coe0033=number0033/100
    coe0033=int(coe0033)
    print(SomeStandardNumbers0033[coe0033],end = " ")
    rem0033=number0033%100
    if(rem0033<=19):
        if()
        print(numbersLessThan110033[rem0033],end = " ")
    elif(rem0033>=20)and(rem0033<100):
        coe0033=rem0033/10
        coe0033=int(coe0033)
        print(someFIxedNumbers0033[coe0033],end = " ")
        coe00332=rem0033%10
        if(coe00332 != 0):
            print(numbersLessThan110033[coe00332],end = " ")
print(" ")        