roman = {1:'I',4 : 'IV',5 :'V',9 : 'IX',10 : 'X',40 : 'XL',50 : 'L',90 : 'XC',100 : 'C',400 : 'CD',500 : 'D',900 : 'CM',1000 : 'M'}
number = int(input("Enter the number"))
for k in roman.keys():
    if(number >= k):
        number = number % k
        for i in range (0, number / k):
            print(roman[k],end = '')