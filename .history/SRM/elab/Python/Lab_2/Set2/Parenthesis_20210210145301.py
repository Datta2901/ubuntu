Stack0033=[]
word0033 = str(input())
for lette in word0033 : 
    if(lette=="(" or lette=="[" or lette=="{"):
        Stack0033.append(lette)
    elif((lette==")" or lette=="]" or lette=="}") and Stack0033==[]):
        stack.append(lette)
        break
    elif(Stack0033[-1]=="("):
        if(lette==")"):
            Stack0033.pop()
    elif(stack[-1]=="{"):
        if(lette=="}"):
            Stack0033.pop()
    elif(Stack0033[-1]=="["):
        if(lette=="]"):
            Stack0033.pop()
if(Stack0033==[]):
    print("Balanced")
else:
    print("Unbalanced")