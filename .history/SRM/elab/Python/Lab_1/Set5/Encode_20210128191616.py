word = input("Enter the string : ")
for i in word:
    asci = ord(i) # converts character to it
    asci = asci - 30
    print(chr(asci),end = '')