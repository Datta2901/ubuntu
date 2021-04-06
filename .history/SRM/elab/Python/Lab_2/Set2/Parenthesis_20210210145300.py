Stack0033=[]
word0033 = str(input())
for  in word0033 : 
    if(=="(" or =="[" or =="{"):
        Stack0033.append()
    elif((==")" or =="]" or =="}") and Stack0033==[]):
        stack.append()
        break
    elif(Stack0033[-1]=="("):
        if(==")"):
            Stack0033.pop()
    elif(stack[-1]=="{"):
        if(=="}"):
            Stack0033.pop()
    elif(Stack0033[-1]=="["):
        if(=="]"):
            Stack0033.pop()
if(Stack0033==[]):
    print("Balanced")
else:
    print("Unbalanced")