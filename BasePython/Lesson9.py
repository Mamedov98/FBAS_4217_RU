# car = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]   # [] - брэкеты
# # car - list
#
# i = 0
# while i < len(car):
#     print(car[i], end=",")
#     i += 1


import random
names = ["Alik", "Rafiq", "Nuray", "Rustam", "Shems", "Mammadrza", "Fidan", "Yusif", "Maksimus", "Akbar"]
new_names = list()
returned_indexes = list()


while len(new_names) != len(names):
    random_index = random.randint(0, len(names) - 1)

    if returned_indexes.count(random_index) == 0:
        new_names.append(names[random_index])
        returned_indexes.append(random_index)


print(new_names)

text = input("Enter your text: ")
words = input("Enter your words: ")

word_list = words.split()

result = ""
for i in range(len(text.split())):
        result += word_list[i]

print(result)


