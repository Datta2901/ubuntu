Stack0033=[]
word0033 = str(input())
for letter0 in word0033 : 
    if(letter0=="(" or letter0=="[" or letter0=="{"):
        Stack0033.append(letter0)
    elif((letter0==")" or letter0=="]" or letter0=="}") and Stack0033==[]):
        stack.append(letter0)
        break
    elif(Stack0033[-1]=="("):
        if(letter0==")"):
            Stack0033.pop()
    elif(stack[-1]=="{"):
        if(letter0=="}"):
            Stack0033.pop()
    elif(Stack0033[-1]=="["):
        if(letter0=="]"):
            Stack0033.pop()
if(Stack0033==[]):
    print("Balanced")
else:
    print("Unbalanced")