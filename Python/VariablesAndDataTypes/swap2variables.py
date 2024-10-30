x = "geeks"
y = "for"
print(x,y)

# Method 1
t = x
x = y 
y = t
print(x,y)

# Method 2 - Using comma assignment
x,y = y,x
print(x,y)
x,y,z = 100,"geeks",10.5
print(x,y,z)