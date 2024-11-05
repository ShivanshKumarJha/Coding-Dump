# Implicit type - type conversion happens automatically
# Explicit type - write program for type conversion

# Implicit type
a = 10
b = 1.5
c = a + b
print(c)
d = True
e = d + a
print(e)

# Explicit type
s = "135"
i = 10 + int(s)
f = float(s)
print(i)                            #145
print(f)                            #135.0

s = "geeks"
print(list(s))
print(tuple(s))
print(set(s))

l = ['a','b','c']
print(str(l))                       #['a','b','c']
a = 10
b = 11
print(str(a) + str(b))              #1011
c = 12.5
print(str(c))                       #12.5

t = (10,20,30)
print(list(t))                      #[10,20,30]
s = {10,20,30}
print(list(s))                      #[10,20,30]

a = 20
print(bin(a))                       #0b10100
print(hex(a))                       #0x14
print(oct(a))                       #0o24

a = "1001"
print(int(a,2))                     #this binary number to decimal equivalent - 9
b = "12"
print(int(b,8))                     #this octal number to decimal equivalent - 10
c = "A1"
print(int(c,16))                    #this hexadecimal to decimal equivalent - 161