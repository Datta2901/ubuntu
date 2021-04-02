numbersLessThan110033= {0:'zero',1: 'One', 2: 'Two', 3: 'Three', 4: 'Four', 5: 'Five', \
            6: 'Six', 7: 'Seven', 8: 'Eight', 9: 'Nine', 10: 'Ten', \
            11: 'Eleven', 12: 'Twelve', 13: 'Thirteen', 14: 'Fourteen', \
            15: 'Fifteen', 16: 'Sixteen', 17: 'Seventeen', 18: 'Eighteen', 19: 'Nineteen'}
someFIxedNumbers = {20:'Twenty', 30:'Thirty',40: 'Forty', 50:'Fifty',60: 'Sixty', 70:'Seventy', 80:'Eighty', 90:'Ninety'}
SomeStandardNumbers = {100:'One hundred and',200:'Two hundred and', 300:'Three hundred and',400: 'Four hundred and', 500:'Five hundred and',600: 'Six hundred and', 700:'Seven hundred and', 800:'Eight hundred and', 900:'Nine hundred and'}
number=int(input("Enter a number less than 1000:"))
if(number<=19):
    print(numbersLessThan110033[number],end = " ")
elif(number>=20)and(number<100):
    div=int(number/10)
    print(" ",someFIxedNumbers[div])
    div2=number%10
    print(" ",numbersLessThan110033[div2])
elif(number>=100)and(number<1000):
    div=number/100
    div=int(div)
    print(" ",SomeStandardNumbers[div])
    intz=number%100
    if(intz<=19):
        print(" ",numbersLessThan110033[intz])
    elif(intz>=20)and(intz<100):
        div=intz/10
        div=int(div)
        print(" ",someFIxedNumbers[div])
        div2=intz%10
        print(" ",numbersLessThan110033[div2])