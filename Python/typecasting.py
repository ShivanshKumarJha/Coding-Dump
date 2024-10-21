# Implicit type conversion - where python itself converts one datatype to another
# Explicit type conversion - where the user converts one datatype to another

name = "john"
age = 23
marks = 95.5
marks2 = 2

print(type(name))
print(type(age))
print(type(marks))
print(type(marks2))

c = marks + marks2 # int + float = float
print(c)
print(type(c))

# Explicit Conversion
a = "123"
b = 1.23
print("Before conversion: ",type(a))
print(type(b))
a = int(a)
print("After conversion: ",type(a))

c = a + b
print(c)
print(type(c))