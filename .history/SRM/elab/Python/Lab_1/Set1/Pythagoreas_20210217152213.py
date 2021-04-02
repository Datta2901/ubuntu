def areAnagram(str1003,str2003):
    n1003 = len(str1003)
    n2003 = len(str2003)
    if n1003 != n2003:
        return 0
    str1003 = sorted(str1003)
    str2003 = sorted(str2003)
    for i in range(0, n1003):
        if str1003[i] != str2003[i]:
            return 0
    return 1
str1003=input("\nEnter the first string = ")
str2003=input("\nEnter the second string = ")
if areAnagram(str1003, str2003):
    print("\nThe two strings are anagram of each other")
else:
    print("\nThe two strings are not anagram of each other")