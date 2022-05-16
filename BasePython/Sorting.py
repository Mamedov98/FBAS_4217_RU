# <editor-fold desc="Part 1">

import tkinter
import tkinter.colorchooser as color

#
# def choose_color():
#     result = color.askcolor()
#     result = tuple(result)
#
#     tkinter.Label(root_window, text="Red:" + str(result[0][0])).pack()
#     tkinter.Label(root_window, text="Green: " + str(result[0][1])).pack()
#     tkinter.Label(root_window, text="Blue" + str(result[0][2])).pack()
#
#
# HEIGHT = 300
# WIDTH = 300
#
# root_window = tkinter.Tk()
# root_window.title("Test Window")
# root_window.geometry(f"{HEIGHT}x{WIDTH}")
# root_window.resizable(False, False)
#
# select_color = tkinter.Button(root_window, text="Choose Color", command=choose_color)
# select_color.pack()
#
# root_window.mainloop()

# </editor-fold>


def count_simple(nums):
    i = 0
    counter = 0
    while i < len(nums):
        count = 1
        j = 2
        while j != int(nums[i]):
            if int(nums[i]) % j == 0:
                count += 1
            j += 1
            if count > 2:
                break
        i += 1
        if count == 1:
            counter += 1

    return counter


nums = input()

result = count_simple(nums.split())

print(result)