n = int(input("Enter a number: "))

flag = True
for i in range(2,n):
    if n % i == 0:
        flag = False
        break

if flag:
    print("Number is prime")
else:
    print("Number is not prime")

# While - Else Loop
n = int(input("Enter a number: "))
if n <= 1:
    print("Number is not prime")
else:
    x = 2
    while x * x <= n:
        if n % x == 0:
            print("Number is not prime")
            break
        x = x + 1
    else:
        print("Number is prime")