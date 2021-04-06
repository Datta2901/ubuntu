Stack0033=[]
=str(input())
for x in :
    if(x=="(" or x=="[" or x=="{"):
        Stack0033.append(x)
    elif((x==")" or x=="]" or x=="}") and Stack0033==[]):
        stack.append(x)
        break
    elif(Stack0033[-1]=="("):
        if(x==")"):
            Stack0033.pop()
    elif(stack[-1]=="{"):
        if(x=="}"):
            Stack0033.pop()
    elif(Stack0033[-1]=="["):
        if(x=="]"):
            Stack0033.pop()
if(Stack0033==[]):
    print("Balanced")
else:
    print("Unbalanced")