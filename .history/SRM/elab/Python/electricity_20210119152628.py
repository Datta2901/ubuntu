units = int(input())
answer = 0
if (units <= 50):
    answer = units * 0.50
elif (units <= 150):
    answer = 25 + (units - 50)  * 0.75
elif (units <= 250):
    answer = 25 + 112.5 + (units - 150) * 1.20
else:
