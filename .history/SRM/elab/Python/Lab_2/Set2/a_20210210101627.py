# numbers = input().split('(').split(')')
# print(numbers)
import random
ur_ticket = int(input("Enter a number betweeen (1,10):"))
def Winner(ur_ticket):
    lot_ticket = int(random.radint(1,10)
    print("lottery ticket number is:",lot_ticket)
    if lot_ticket == ur_ticket:
        print('Jackpot number')
    else:
        print('lost')
Winner(ur_ticket)