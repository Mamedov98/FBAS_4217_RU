# def Capitalize(text):
#     operators = ['.', '?', '!']
#     new_text = list(text)
#
#     i = 0
#     while i != len(new_text):
#         if str(new_text[i]).isspace():
#             new_text.pop(i)
#         i += 1
#
#     for i in range(len(operators)):
#         for j in range(len(new_text)):
#             if new_text[j] == operators[i]:
#                 tmp = new_text[j + 1]
#                 new_text[j + 1] = tmp.upper()
#
#     for item in new_text:
#         print(item, end='')


Text = "Hello! how are you ? i'm great, thanks"


a = input()
word1 = input()
word2 = input()

a = a.split()
index = []

for i in range(len(a)):
    if a[i].lower() == word1.lower():
        index.append(i)


for i in range(len(index)):
        a[index[i]] = word2

print(a)

