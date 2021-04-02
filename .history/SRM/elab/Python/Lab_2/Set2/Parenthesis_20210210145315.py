S0033=[]
word0033 = str(input())
for letter0033 in word0033 : 
    if(letter0033 =="(" or letter0033=="[" or letter0033=="{"):
        S0033.append(letter0033)
    elif((letter0033==")" or letter0033=="]" or letter0033=="}") and S0033==[]):
        S.append(letter0033)
        break
    elif(S0033[-1]=="("):
        if(letter0033==")"):
            S0033.pop()
    elif(S[-1]=="{"):
        if(letter0033=="}"):
            S0033.pop()
    elif(S0033[-1]=="["):
        if(letter0033=="]"):
            S0033.pop()
if(S0033==[]):
    print("Balanced")
else:
    print("Unbalanced")