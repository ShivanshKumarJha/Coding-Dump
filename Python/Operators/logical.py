a = 10
b = 20
c = 30
print(a < b and b < c)
print(a < b or b > c)
print(not a > b)

s1 = ""
s2 = s1 or "Default Str"
print(s2)       #Default Str because s1 is empty

# Expression that are treated as False : None, Empty String, List, Tuples, Dictionary etc.

x = 10
print(x or 20)
y = 0
print(y or 30) # will check for truthy value, if not found then will print the last element hence here it will print 30
z = 40
print(z and 50) # will check for falsy value if not found then will print the last element hence here it will print 50
