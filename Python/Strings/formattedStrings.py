# Using % - like C language
name = "Shivansh"
age = 21
print("My name is %s and my age is %d" %(name, age))

# Using format()
print("My name is {0} and my age is {1}".format(name, age))

# Using f-String - Best Method
print(f"My name is {name} and my age is {age}")

a = 10
b = 20
print(f"Sum of {a} and {b} is {a+b}")

s1 = "ABC"
s2 = "abc"
print(f"Lower case of {s1} is {s1.lower()} and upper case of {s2} is {s2.upper()}")