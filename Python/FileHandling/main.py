import os

f = open("hello.txt", "r")
data = f.read()
print(data)
print(type(data))
f.close()

# Read the fixed number of characters
f = open("hello.txt","r")
data = f.read(6)
print(data)
f.close()

# Read the file line by line
f = open("hello.txt", "r")
line1 = f.readline()
line2 = f.readline()
print(line1)
print(line2)
f.close()

# Writing to a file
f = open("demo.txt","w")
f.write("Hello World! 123")
f.close()

# Append to a file
f = open("demo.txt","a")
f.write("\nThis is a new line")
f.close()

'''
    Different modes are:
    r - read
    w - write
    a - append
    r+ - read and write.start from beginning.no truncation
    w+ - write and read.start from beginning.truncate
    a+ - append and read.start from end.no truncation
    Truncation means deleting the contents of the file
'''

f = open("demo.txt","r+")
f.write("abc")
f.close()

# with - open a file and automatically close it
with open("demo.txt","r") as f:
    data = f.read()
    print(data)

# delete a file
os.remove("demo.txt")