stack0017=[]
k=str(input())
for x in k:
    if(x=="(" or x=="[" or x=="{"):
        stack0017.append(x)
    elif((x==")" or x=="]" or x=="}") and stack0017==[]):
        stack.append(x)
        break
    elif(stack0017[-1]=="("):
        if(x==")"):
            stack0017.pop()
    elif(stack[-1]=="{"):
        if(x=="}"):
            stack0017.pop()
    elif(stack0017[-1]=="["):
        if(x=="]"):
            stack0017.pop()
if(stack0017==[]):
    print("Balanced")
else:
    print("Unbalanced")