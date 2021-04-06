units = int(input())
answer = 0
if (units <= 199):
    answer = units * 1.20
elif (units <= 200) and (units < 400):
    answer = 238.8 + (units - 199)  * 1.50
elif (units <= 400  and units < 600):
    answer = 238.8 + 300 + (units - 199) * 1.80
else:
    answer = 238.8 + 300 + 360 + (units -  600) * 2
if(answer >= 400):
    answer += answer * 0.15   
if(answer < 100):
    print("Invalid units")
print("The bill "answer)
