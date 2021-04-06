def areAnagram(str10037, str20037):
    n10037 = len(str10037)
n20037 = len(str20037)
if n10037 != n20037:
return 0
str10037 = sorted(str10037)
str20037 = sorted(str20037)
for i in range(0, n10037):
if str10037[i] != str20037[i]:
return 0
return 1
str10037=input("\nEnter the first string = ")
str20037=input("\nEnter the second string = ")
if areAnagram(str10037, str20037):
print("\nThe two strings are anagram of each other")
else:
print("\nThe two strings are not anagram of each other")