numbersLessThan110033= {0:'zero',1: 'One', 2: 'Two', 3: 'Three', 4: 'Four', 5: 'Five', \
            6: 'Six', 7: 'Seven', 8: 'Eight', 9: 'Nine', 10: 'Ten', \
            11: 'Eleven', 12: 'Twelve', 13: 'Thirteen', 14: 'Fourteen', \
            15: 'Fifteen', 16: 'Sixteen', 17: 'Seventeen', 18: 'Eighteen', 19: 'Nineteen'}
someFIxedNumbers = {20:'Twenty', 30:'Thirty',40: 'Forty', 50:'Fifty',60: 'Sixty', 70:'Seventy', 80:'Eighty', 90:'Ninety'}
SomeStandardNumbers = {100:'One hundred and',200:'Two hundred and', 300:'Three hundred and',400: 'Four hundred and', 500:'Five hundred and',600: 'Six hundred and', 700:'Seven hundred and', 800:'Eight hundred and', 900:'Nine hundred and'}
number0033=int(input("Enter a number less than 1000:"))
if(number0033<=19):
    print(numbersLessThan110033[number0033],end = " ")
elif(number0033>=20)and(number0033<100):
    coe0022=int(number0033/10)
    print(" ",someFIxedNumbers[coe0022])
    coe00222=number0033%10
    print(" ",numbersLessThan110033[coe00222])
elif(number0033>=100)and(number0033<1000):
    coe0022=number0033/100
    coe0022=int(coe0022)
    print(" ",SomeStandardNumbers[coe0022])
    rem0033=number0033%100
    if(rem0033<=19):
        print(" ",numbersLessThan110033[rem0033])
    elif(rem0033>=20)and(rem0033<100):
        coe0022=rem0033/10
        coe0022=int(coe0022)
        print(" ",someFIxedNumbers[coe0022])
        coe00222=rem0033%10
        print(" ",numbersLessThan110033[coe00222])