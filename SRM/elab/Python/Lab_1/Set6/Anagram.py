word1 = input("Enter the first string")
word2 = input("Enter the Second string")
word1 = ''.join(sorted(word1))
word2 = ''.join(sorted(word2))
if(word1 == word2):
    print("Given two Strings are anagrams ")
else:
    print("Given two strings are not anagrams")