str1 = str(input())
first_string = str1.lower()

str2 = str(input())
second_string = str2.lower()

if first_string==second_string:
    print("0")
elif first_string > second_string:
    print("1")
elif first_string < second_string:
    print("-1")
