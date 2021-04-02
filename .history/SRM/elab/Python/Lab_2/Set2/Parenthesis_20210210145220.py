Stack00=[]
k=str(input())
for x in k:
    if(x=="(" or x=="[" or x=="{"):
        Stack00.append(x)
    elif((x==")" or x=="]" or x=="}") and Stack00==[]):
        stack.append(x)
        break
    elif(Stack00[-1]=="("):
        if(x==")"):
            Stack00.pop()
    elif(stack[-1]=="{"):
        if(x=="}"):
            Stack00.pop()
    elif(Stack00[-1]=="["):
        if(x=="]"):
            Stack00.pop()
if(Stack00==[]):
    print("Balanced")
else:
    print("Unbalanced")