# Задача №1: Пользователь вводит два числа,
# Вывести все нечетные числа в этом диапазоне.

# <editor-fold desc="Работа с циклом. Задание 1">
# start = int(input("Enter start: "))    # 1
# end = int(input("Enter end: "))    # 10
#
# i = start
# print("Even:")
# while i <= end:
#     if i % 2 != 0:
#         print(i, end=' ')
#     i += 1
# print('\n')
#
#
# i = start
# print("Odd:")
# while i <= end:
#     if i % 2 == 0:
#         print(i, end=' ')
#     i += 1
# </editor-fold>

# Задача №1: Пользователь вводит число,
# Остановить цикл, если он введет -1

# <editor-fold desc="Задание 2.Работа с циклом через ключ">
# check = True  # Ключ
#
# while check:
#     print("Hello World")

# Variant 1
# number = 0
#
# while number != -1:
#     number = int(input("Enter number: "))
#     print(number)

# Variant 2
# while True:
#     number = int(input("Enter number: "))
#     if number == -1:
#         break
#     print(number)

# Variant 3
# check = True
#
# while check:
#     number = int(input("Enter number: "))
#     if number == -1:
#         check = False
#     else:
#         print(number)

# </editor-fold>


# num = 5
#
# while num:
#     print("Hello World")
#     num += 1
#     if num % 2 == 0:
#         print(num)
#         continue
#     else:
#         break
#
# print("Finish")


start = int(input("Enter first number: "))  # 1
end = int(input("Enter second number: "))   # 3

addition = 0
count = 0

i = start
while i <= end:
    addition += i
    i += 1
    count += 1

average = addition / count

print(addition, average)
