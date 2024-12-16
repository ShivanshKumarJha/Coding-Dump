print(ord('a'))
print(ord('A'))
print(chr(97))
print(chr(65))

s = "Geek"
print(s[0])
print(s[1])
print(s[-1])
print(s[-2])

# Strings are immutable
s[0] = "e"
print(s) # This will give the error

# Multi Line Strings
s = """This is a multi line string
This is the second line"""
print(s)