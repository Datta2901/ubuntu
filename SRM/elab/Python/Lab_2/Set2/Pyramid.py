# TO print pyramid og given n lines

number0033 = int(input("Enter a number"))
for i0033 in range(1,number0033 + 1):
    for k0033 in range(0,number0033 - i0033):
        print(end = "  ")
    for l0033 in range(i0033,1,-1):
        print(l0033,end = " ")
    for j0033 in range(1,i0033+1):
        print(j0033,end = " ")
    print(" ")    