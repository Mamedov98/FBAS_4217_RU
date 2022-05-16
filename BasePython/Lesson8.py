# Lesson 8 - Strings
# 4 data types => int, float, bool, string
# name = "Elvin" # variable with data type - STRING

# <editor-fold desc="Transformation">

# upper_name = name.upper()
# lower_name = name.lower()
# cap_name = name.capitalize()
# swapped_name = name.swapcase()

# </editor-fold>

# <editor-fold desc="Boolean methods">

# print(name.isalnum())   # is alpha numeric
# print(name.isalpha())   # is alphabet
# print(name.isascii())   # is ASCII table character
# print(name.isdigit())   # ia only digits
# print(name.islower())   # is lower
# print(name.isupper())   # is upper
# print(name.isprintable())   # is printable
# print(name.isspace())   # is space
# print(name.istitle())   # is title

# </editor-fold>

# <editor-fold desc="String to number">
# <editor-fold desc="part1">
# string = "1234"
#
# length = len(string) - 1
# i = 0
# res = 0

# while i != length + 1:
#     tmp = int(string[i])
#     res = res * 10 + tmp
#     i += 1

# while length != i - 1:
#     tmp = int(string[length])
#     res = res * 10 + tmp
#     length -= 1


# </editor-fold>

# <editor-fold desc="Part2">
# string = "E1lvin123"
#
# str_result = str()
#
# for i in range(len(string)):
#     if string[i].isdigit():
#         str_result += string[i]
#
#
# print(str_result)
#
# length = len(str_result)
# i = 0
# res = 0
#
# while i != length:
#     tmp = int(str_result[i])
#     res = res * 10 + tmp
#     i += 1
#
# print(res)
# </editor-fold>
# </editor-fold>



name = "Elvin"
print(name.count("a"))

# print(name.index("a"))
# print(name.find("a"))
