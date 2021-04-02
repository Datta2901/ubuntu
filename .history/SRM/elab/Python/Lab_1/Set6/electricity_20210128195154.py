units = int(input())
answer = 0
if (units <= 199):
    answer = units * 1.20
elif (units <= 200) and (units < 400):
    answer = 238.8 + (units - 1990)  * 1.5
elif (units <= 250):
    answer = 238.8 + 112.5 + (units - 150) * 1.20
else:
    answer = 25 + 112.5 + (units -  250) * 1.50
answer = answer + answer * 0.20
print(answer)
