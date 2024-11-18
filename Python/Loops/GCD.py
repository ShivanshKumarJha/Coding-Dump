import math

a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

small = min(a, b)
GCD = 1
for i in range(2,small+1):
    if a % i == 0 and b % i == 0:
        GCD = i

print("GCD of both numbers is",GCD)
gcd = math.gcd(a,b)
print("GCD of both numbers is",gcd)