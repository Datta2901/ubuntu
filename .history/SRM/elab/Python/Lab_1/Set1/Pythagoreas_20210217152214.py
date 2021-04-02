def areAnagram(str10033,str20033):
    n10033 = len(str10033)
    n20033 = len(str20033)
    if n10033 != n20033:
        return 0
    str10033 = sorted(str10033)
    str20033 = sorted(str20033)
    for i in range(0, n10033):
        if str10033[i] != str20033[i]:
            return 0
    return 1
str10033=input("\nEnter the first string = ")
str20033=input("\nEnter the second string = ")
if areAnagram(str10033, str20033):
    print("\nThe two strings are anagram of each other")
else:
    print("\nThe two strings are not anagram of each other")