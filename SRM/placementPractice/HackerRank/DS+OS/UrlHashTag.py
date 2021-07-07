import re
m=re.compile('(?<=www\.)\w+(?=\.)|^\w+(?=\.)', re.I)
m2=re.compile('(?<=#).+', re.I)
m3=re.compile('[a-z]+|\d*\.\d+|\d+', re.I)
f=open("words.txt")
dic = []
for line in f:
    if line.strip() not in dic:
        dic.append(line.strip().lower())
N = int(input())
for i in range(N):
    curr = input()
    url = m.findall(curr)
    parts = []
    if len(url) != 0:
        parts = m3.findall(url[0])
    else:
        hashtag = m2.findall(curr)
        parts = m3.findall(hashtag[0])
    output = []
    for j in parts:
        if j.isalpha():
            last = []
            num = []
            for k in range(len(j)):
                last.append('1')
                if k == len(j)-1:
                    num.append('1')
                else:
                    num.append('0')
            bad = False
            while num < last:
                end = len(j)-1
                start = end-1
                vals = []
                bad = False
                while end >= 0:
                    while start >= 0 and num[start] != '1':
                        start -= 1
                    word = j[start+1:end+1]
                    if word.lower() in dic:
                        vals.insert(0, word.lower())
                    else:
                        bad = True
                        break
                    end = start
                    start = end-1
                if not bad:
                    output += vals
                    break
                carry = 1
                for k in range(1, len(j)+1):
                    if carry == 0:
                        break
                    elif num[len(j)-k] == '0':
                        num[len(j)-k] = '1'
                        break
                    else:
                        num[len(j)-k] = '0'
            if bad:
                break
        else:
            output.append(j)
    if bad:
        output = [j]
    for j in range(len(output)):
        if j != len(output)-1:
            print(output[j], end=' ')
        else:
            print(output[j])
