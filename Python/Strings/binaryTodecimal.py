num = input("Enter a binary number: ")
print(int(num, 2))

i = len(num) - 1
j = 0
dec = 0

while i >= 0:
    dec += int(num[i]) * 2 ** (j)
    i -= 1
    j += 1
print(dec)