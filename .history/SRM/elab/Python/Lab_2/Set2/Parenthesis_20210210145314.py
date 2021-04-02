0033=[]
word0033 = str(input())
for letter0033 in word0033 : 
    if(letter0033 =="(" or letter0033=="[" or letter0033=="{"):
        0033.append(letter0033)
    elif((letter0033==")" or letter0033=="]" or letter0033=="}") and 0033==[]):
        .append(letter0033)
        break
    elif(0033[-1]=="("):
        if(letter0033==")"):
            0033.pop()
    elif([-1]=="{"):
        if(letter0033=="}"):
            0033.pop()
    elif(0033[-1]=="["):
        if(letter0033=="]"):
            0033.pop()
if(0033==[]):
    print("Balanced")
else:
    print("Unbalanced")