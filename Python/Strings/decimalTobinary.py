num = int(input("Enter a number: "))
res = ""

while num>0:
    res = str(num%2) + res
    num = num//2
print(res)