# num1 = 10
#
# while num1 != 0:
#     num1 -= 1
#     print(num1)

# <editor-fold desc="FOR">

# for i in range(10):
#     print(i, end=" ")
#
# print()
#
# for i in range(5, 10):
#     print(i, end=" ")
#
# print()
#
# for i in range(1, 10, 3):
#     print(i, end=" ")

# </editor-fold>

num1 = int(input())
num2 = int(input())

for i in range(num1, num2 - 5):
    for j in range(num1, num1 + 2):
        print(i, j)
    print()
