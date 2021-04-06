word = input("Enter the encoded string")
for i in word:
    a = ord(i)
    a = a + 30
    print(chr(a),end)