import math
def first_digit(x):
    d = int(math.log10(x))
    res = x // (10 ** d)
    return res

x = int(input("Enter a number: "))
print(first_digit(x))