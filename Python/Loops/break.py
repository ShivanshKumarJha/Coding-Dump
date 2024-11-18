# Find the smallest divisor of a number such that divisor is greater than 1
num = int(input("Enter a number: "))
for i in range(2,num+1):
    if num%i==0:
        print(i)
        break

num = int(input("Enter a number: "))
x = 2
while x <= num:
    if num%x == 0:
        print(x)
        break
    x = x + 1

