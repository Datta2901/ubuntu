Stack0033=[]
word0033 = str(input())
for letter0033 in word0033 : 
    if(letter0033 =="(" or letter0033=="[" or letter0033=="{"):
        Stack0033.append(letter0033)
    elif((letter0033==")" or letter0033=="]" or letter0033=="}") and Stack0033==[]):
        Stack.append(letter0033)
        break
    elif(Stack0033[-1]=="("):
        if(letter0033==")"):
            Stack0033.pop()
    elif(Stack00[-1]=="{"):
        if(letter0033=="}"):
            Stack0033.pop()
    elif(Stack0033[-1]=="["):
        if(letter0033=="]"):
            Stack0033.pop()
if(Stack0033==[]):
    print("Balanced")
else:
    print("Unbalanced")