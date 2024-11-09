from traceback import print_tb

x = 10
y = x
print(x is y)           # True
print(x is not y)       # True

# is, is not -> compare values of id()- which is the memory location

x1 = 10
x2 = 10
y1 = 10.5
y2 = 10.5
z1 = "geeksforgeeks"
z2 = "geeksforgeeks"

# This all will give True because both have same value and have hence same id means stored at same memory location
print(x1 is x2)
print(y1 is y2)
print(z1 is z2)

l1 = [10,20,30]
l2 = [10,20,30]
print(l1 is l2)         # False