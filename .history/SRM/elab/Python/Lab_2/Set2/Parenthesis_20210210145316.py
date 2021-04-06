Stac0033=[]
word0033 = str(input())
for letter0033 in word0033 : 
    if(letter0033 =="(" or letter0033=="[" or letter0033=="{"):
        Stac0033.append(letter0033)
    elif((letter0033==")" or letter0033=="]" or letter0033=="}") and Stac0033==[]):
        Stac.append(letter0033)
        break
    elif(Stac0033[-1]=="("):
        if(letter0033==")"):
            Stac0033.pop()
    elif(Stac[-1]=="{"):
        if(letter0033=="}"):
            Stac0033.pop()
    elif(Stac0033[-1]=="["):
        if(letter0033=="]"):
            Stac0033.pop()
if(Stac0033==[]):
    print("Balanced")
else:
    print("Unbalanced")