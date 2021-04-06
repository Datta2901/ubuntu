numbersLessThan11 = {0:'zero',1: 'One', 2: 'Two', 3: 'Three', 4: 'Four', 5: 'Five', \
            6: 'Six', 7: 'Seven', 8: 'Eight', 9: 'Nine', 10: 'Ten', \
            11: 'Eleven', 12: 'Twelve', 13: 'Thirteen', 14: 'Fourteen', \
            15: 'Fifteen', 16: 'Sixteen', 17: 'Seventeen', 18: 'Eighteen', 19: 'Nineteen'}
someFI = {20:'Twenty', 30:'Thirty',40: 'Forty', 50:'Fifty',60: 'Sixty', 70:'Seventy', 80:'Eighty', 90:'Ninety'}
num2words3 = {100:'One hundred and',200:'Two hundred and', 300:'Three hundred and',400: 'Four hundred and', 500:'Five hundred and',600: 'Six hundred and', 700:'Seven hundred and', 800:'Eight hundred and', 900:'Nine hundred and'}
num0017=int(input("Enter a number less than 1000:"))
if(num0017<=19):
    print(numbersLessThan11[num0017],end = " ")
elif(num0017>=20)and(num0017<100):
    div=int(num0017/10)
    print(" ",someFI[div])
    div2=num0017%10
    print(" ",numbersLessThan11[div2])
elif(num0017>=100)and(num0017<1000):
    div=num0017/100
    div=int(div)
    print(" ",num2words3[div])
    intz=num0017%100
    if(intz<=19):
        print(" ",numbersLessThan11[intz])
    elif(intz>=20)and(intz<100):
        div=intz/10
        div=int(div)
        print(" ",someFI[div])
        div2=intz%10
        print(" ",numbersLessThan11[div2])