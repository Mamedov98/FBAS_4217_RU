# Data types
# 1. Integer number - int. Example: 5
# 2. Floating number - float. Example: 3.25
# 3. Boolean - bool. Example: True
# 4. String - str. Example: "Hello World"

# Part 1 - Print

# print() - default function

# print(argument) - argument for function

# print("'Случайное не случайно'")
# print('"Случайное не случайно"')


# print(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, sep=",")   # separate - отделить

# print("Hello", end=",")
# print("World")


# Part 2 - escape sequences(эскейп последовательности)

# print("\"Hello World\"")
# print('\'Hello World\'')
# print("Hello\\\\World")
# print("Hello\nWorld")   # \n - newline

# print(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, sep="\n")
# print(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, sep="\t")

# Variable - переменная.
# Variable naming cases:
#   1. Pascale Case - FirstName
#   2. Camel Case - firstName
#   3. Snake Case - first_name
#   4. Kebab Case - first-name(Attention!!! его нет в пайтон)

first_num = int(input("Enter first number: "))
second_num = int(input("Enter second number: "))

result = first_num + second_num

print(result)



