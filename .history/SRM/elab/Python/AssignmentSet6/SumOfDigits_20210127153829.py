ok0033 = 1
while(ok0033 == 1) :
    number0033 = int(input("Enter a number between 1 - 100 :"))
    if (number0033 >= 1 and number0033 <= 100):
        ok0033 = 0;
        sum0033 = 0
        num0033 =
        while(number0033 > 0):
            sum0033 = sum0033 + (number0033 % 10)
            number0033 = number0033 / 10;
    print("Sum of the digits of " + str(number0033) + " is " + str(sum0033))        