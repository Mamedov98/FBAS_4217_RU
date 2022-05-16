# <editor-fold desc="Functions part 1">

# <editor-fold desc="Part1">

# def print_hello():
#     print("Hello World")
#
#
# def is_even(number):
#     if number % 2 == 0:
#         return True
#     return False


# num = int(input())
# print(is_even(num))
#
#
# def addition(num1, num2):
#     return num1 + num2
#
#
# print(addition(5, 6))
# result = addition(5, 6)
# print(result)
# print(is_even(addition(5, 6)))

# </editor-fold>

# <editor-fold desc="Max&Min">
# def find_max(*args):  # args - arguments, *args - tuple
#     maximum = args[0]
#     for i in range(len(args)):
#         if maximum < args[i]:
#             maximum = args[i]
#     return maximum
#
#
# def find_min(*args):  # args - arguments, *args - tuple
#     minimum = args[0]
#     for i in range(len(args)):
#         if minimum > args[i]:
#             minimum = args[i]
#     return minimum


# </editor-fold>

# <editor-fold desc="Part2">
# def login(**kwargs):     # usernames - dictionary
#     username = input("Enter your username: ")
#     password = input("Enter your password: ")
#
#     for key in kwargs.keys():
#         if key == username and kwargs[key] == password:
#             print(f"User: {key} is Authorized")
#
#
# login(NightCall018="Elvin123", Yusmax="Yusif123")
# </editor-fold>

# <editor-fold desc="Practice lesson 3">

# def max_from_4(numbers):
#     maximum = numbers[0]
#     for i in range(len(numbers)):
#         if maximum < numbers[i]:
#             maximum = numbers[i]
#     return maximum
#
#
# def max_from(*numbers):
#     maximum = numbers[0]
#     for i in range(len(numbers)):
#         if maximum < numbers[i]:
#             maximum = numbers[i]
#     return maximum
#
#
# nums = [1, 2, 3, 4, 5]
#
# max_from_4(nums)
# max_from(1, 2, 3, 4, 5)


# </editor-fold>

# </editor-fold>

# <editor-fold desc="Functions part2">

# def count_salary(sale_amount):
#     salaries = []
#     for i in range(len(sale_amount)):
#         salary = 200
#         if 0 < sale_amount[i] <= 500:
#             salary += (salary * 3 / 100)
#             salaries.append(salary)
#         elif 500 < sale_amount[i] <= 1000:
#             salary += (salary * 5 / 100)
#             salaries.append(salary)
#         else:
#             salary += (salary * 8 / 100)
#             salaries.append(salary)
#     return salaries
#
#
# def add(numbers):
#     addition = 0
#     for i in range(len(numbers)):
#         addition += numbers[i]
#     return addition
#
#
# def add2(num1, num2, num3=5):
#     return num1 + num2 + num3


# </editor-fold>


# <editor-fold desc="Functions part 3">



# </editor-fold>
