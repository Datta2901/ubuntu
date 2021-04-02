units = int(input())
answer = 0
if (units <= 50) and (units < 150):
    answer = units * 0.50
elif (units <= 150) and (units < 250):
    answer = 25 + (units - 50)  * 0.75
elif (units <= 250):
    answer = 25 + 112.5 + (units - 150) * 1.20
else:
    answer = 25 + 112.5 + (units -  250) * 1.50
answer = answer + answer * 0.20
print(answer)

# 3. electricity unit - input and calculate the total electricity bill according to the given condition:
# For first 50 units Rs. 0.50/unit
# For next 100 units Rs. 0.75/unit
# For next 100 units Rs. 1.20/unit
# For unit above 250 Rs. 1.50/unit
# An additional surcharge of 20% is added to the bill.