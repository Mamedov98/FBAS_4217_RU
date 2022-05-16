# <editor-fold desc="Part 1">


def factorial(num):
    if num == 1:
        return num
    return num * factorial(num - 1)


# a = factorial
# print(a(5))

cars = ["Subaru", "Honda", "Mitsubishi", "Lexus", "Nissan"]

copied_cars = cars.copy()

cars[0] = "Daihatsu"

print(copied_cars[0])

# </editor-fold>

# <editor-fold desc="Part 2">
def print_hello(num):
    print("Hello")
    if num >= 100:
        return
    return print_hello(num + 1)
# </editor-fold>





