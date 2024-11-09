n = int(input("Enter a number: "))
if n % 2 == 0:
    print("Even")
else:
    print("Odd")

n = int(input("Enter a number: "))
if n > 0:
    print("Positive")
elif n < 0:
    print("Negative")
else:
    print("Zero")

n = int(input("Enter a number: "))
if n == 0:
    print("Zero")
elif n % 2 == 0:
    if n < 0:
        print("Negative Even")
    elif n > 0:
        print("Positive Even")
elif n % 2 != 0:
    if n < 0:
        print("Negative Odd")
    elif n > 0:
        print("Positive Odd")