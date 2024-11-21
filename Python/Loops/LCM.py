import math

a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

# max(a,b) <= LCM <= a*b
res = max(a,b)
while res <= a*b:
    if res % a == 0 and res % b == 0:
        break
    res += 1
print("LCM of two number is",res)

gcd = math.gcd(a,b)
lcm = (a*b) // gcd
print("LCM of two number is",lcm)