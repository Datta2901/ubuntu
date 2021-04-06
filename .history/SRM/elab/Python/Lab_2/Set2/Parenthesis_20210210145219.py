Sta=[]
k=str(input())
for x in k:
    if(x=="(" or x=="[" or x=="{"):
        Sta.append(x)
    elif((x==")" or x=="]" or x=="}") and Sta==[]):
        stack.append(x)
        break
    elif(Sta[-1]=="("):
        if(x==")"):
            Sta.pop()
    elif(stack[-1]=="{"):
        if(x=="}"):
            Sta.pop()
    elif(Sta[-1]=="["):
        if(x=="]"):
            Sta.pop()
if(Sta==[]):
    print("Balanced")
else:
    print("Unbalanced")