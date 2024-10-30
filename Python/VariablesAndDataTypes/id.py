# id() is built-in function which gives us unique identifier for every object

print(id(5))
a = 10
print(id(a))
b = a
print(id(b)) 

# These will give the same address/id because literals are stored at same location if we have same value
a = 10
b = 10
print(id(a)) 
print(id(b))

c = "geek"
d = "geek"
print(id(c))
print(id(d))

# is operator
a = 10
b = 10
print(a is b) # If a and b are same or not
c = a
c = print(c is b)
c = 20
print(c is b)