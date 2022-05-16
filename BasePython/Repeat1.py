# import random
#
# nums = []
# for i in range(20):
#     nums.append(random.randint(1, 10))
#
# print(nums)


#  6, 2, 6, 10, 2, 8, 10

# min = nums[0] - 6
# min > nums[i]
# min = nums[i]

# В списке, заполненном случайными числами. Найти, сумму четных, нечетных, отрицптельных,
# произведение между минимальным и максимальным элементами и сумму элемантов между первым
# и последним положительными элементами

import random

nums = list()
length = int(input("Enter length of list: "))

for i in range(length):
    nums.append(random.randint(-10, 10))

minimum = nums[0]
maximum = nums[0]
minimum_index = int()
maximum_index = int()
multiplication = 1
print(nums)


for i in range(length):
    if maximum < nums[i]:
        maximum = nums[i]
        maximum_index = i
    if minimum > nums[i]:
        minimum = nums[i]
        minimum_index = i


if minimum_index > maximum_index:
    for i in range(maximum_index, minimum_index + 1):
        multiplication *= nums[i]
else:
    for i in range(minimum_index, maximum_index + 1):
        multiplication *= nums[i]


print(f"Minimum index: {minimum_index}\n"
      f"Maximum index: {maximum_index}\n"
      f"Numbers: {nums}\n"
      f"Result of multiplication from {minimum_index} to {maximum_index} equals: {multiplication}")


# even_add = 0
# odd_add = 0
# neg_add = 0
#

#
# print(nums)
#
# for i in range(length):
#     if nums[i] % 2 == 0:
#         even_add += nums[i]
#     if nums[i] % 2 != 0:
#         odd_add += nums[i]
#     if nums[i] < 0:
#         neg_add += nums[i]
#
#
# print(f"Even numbers addition equals: {even_add}")
# print(f"Odd  numbers addition equals: {odd_add}")
# print(f"Negative numbers addition equals: {neg_add}")

