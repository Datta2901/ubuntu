import random
# Rules
#  scissor  vs rock = rock 
#  scissor vs paper = scissor
#  paper vs rock =  paper
valid0033 = 1
while valid0033:
    UserChoice0033 = int(input("Enter a number between (0 - 2) : 0 for scissor, 1 for rock,2 for paper "))
    if(UserChoice0033 > 2):
        print("Invalid Number")
    else:
        valid0033 = 0
            
ComputerChoice0033 = int(random.randint(0, 2))  
   
if UserChoice0033 == ComputerChoice0033:
    print("Game is drawn")
elif Userchoice == 0:
    if  ComputerChoice0033 == 2:
        print("You won the game")
    else:
        print("You lost the game")
elif Userchoice == 1:
    if  ComputerChoice0033 == 0:
        print("You won the game")
    else:
        print("You lost the game")
else
                       
    
