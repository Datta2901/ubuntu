word = input("Enter the string : ")
for i in word:
    asci = ord(i) # converts character to
    asci = asci - 30
    print(chr(asci),end = '')