first_number = 5
second_number = 5


# Without elif

# if first_number == second_number:
#     print(f"{first_number} equals {second_number}")
# else:
#     if first_number < second_number:
#         print(f"{first_number} < {second_number}")
#     else:
#         if first_number > second_number:
#             print(f"{first_number} > {second_number}")
#         else:
#             print(f"{first_number} not equals {second_number}")

# With elif

if first_number == second_number:
    print(f"{first_number} equals {second_number}")
elif first_number < second_number:
    print(f"{first_number} < {second_number}")
elif first_number > second_number:
    print(f"{first_number} > {second_number}")
else:
    print(f"{first_number} not equals {second_number}")

if first_number == second_number:
    print(f"{first_number} equals {second_number}")
if first_number < second_number:
    print(f"{first_number} < {second_number}")
if first_number > second_number:
    print(f"{first_number} > {second_number}")
else:
    print(f"{first_number} not equals {second_number}")



