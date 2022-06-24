str1 = str(input())
str1 = set(str1)

l = len(str1)
if l % 2 == 0:
    print("CHAT WITH HER!")
elif l % 2 == 1:
    print("IGNORE HIM!")
