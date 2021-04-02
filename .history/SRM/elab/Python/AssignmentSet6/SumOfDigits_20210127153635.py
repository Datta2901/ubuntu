ok0033 = 1
while(ok0033 == 1) :
    number0033 = int(input("Enter a number between 1 - 100 :"))
    if (number0033 >= 1 and number0033 <= 100):
        ok0033 = 0;
        sum00 = 0
        while(number0033 > 0):
            sum00 = sum00 + (number0033 % 10)
            number0033 = number0033 / 10;
    print("Sum00 of the digits of ",number0033," is ", sum00)        