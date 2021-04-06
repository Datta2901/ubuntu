=[]
k=str(input())
for x in k:
    if(x=="(" or x=="[" or x=="{"):
        .append(x)
    elif((x==")" or x=="]" or x=="}") and ==[]):
        stack.append(x)
        break
    elif([-1]=="("):
        if(x==")"):
            .pop()
    elif(stack[-1]=="{"):
        if(x=="}"):
            .pop()
    elif([-1]=="["):
        if(x=="]"):
            .pop()
if(==[]):
    print("Balanced")
else:
    print("Unbalanced")