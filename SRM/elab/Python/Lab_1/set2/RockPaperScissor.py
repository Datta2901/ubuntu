import random
# Rules
#  scissor vs rock = rock 
#  scissor vs paper = scissor
#  rock vs paper =  paper
valid0033 = 1
#  to take a valid input
while valid0033:
    UserChoice0033 = int(input("Enter a number between (0 - 2) : 0 for scissor, 1 for rock,2 for paper "))
    if(UserChoice0033 > 2):
        print("Invalid Number")
        valid0033 = 1
    else:
        valid0033 = 0
            
ComputerChoice0033 = int(random.randint(0, 2)) # Selecting the computer choice
# print("Computer choice is " + str(ComputerChoice0033)) 
   
if UserChoice0033 == ComputerChoice0033: # if computer and user selected the same input then draw
    print("Game is drawn")
elif UserChoice0033 == 0:
    if  ComputerChoice0033 == 2:
        print("You won the game")
    else:
        print("You lost the game")
elif UserChoice0033 == 1:
    if  ComputerChoice0033 == 0:
        print("You won the game")
    else:
        print("You lost the game")
else:
    if  ComputerChoice0033 == 1:
        print("You won the game")
    else:
        print("You lost the game")
                       
    
