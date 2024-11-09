print(bin(18))              # Decimal to binary - 0b10010
print(bin(12))              # 0b 1100
print(int("0b10010",2))     # Convert this number to decimal if representation is in base of 2 -> 18
print(int("0b1100",2))      # 12

x = 3
y = 6
print(x & y)                # Bitwise AND - 2
print(x | y)                # Bitwise OR - 7
print(x ^ y)                # Bitwise XOR - 5

x = 5
print(x << 1)               # Left Shift Operator - 10
print(x << 2)               # 20 = 5 * (2 ** 2)
# multiply the number with (2 to the power the shifting number)

print(x >> 1)               # Right Shift Operator - 2
print(x >> 2)               # 1
# divide the number with (2 to the power the shifting number)

x = 5
print(~x)                   # Bitwise NOT -> -6
# toggle the every bit
# If the leading bit is then the number is negative hence it will be stored in the 2's complement form