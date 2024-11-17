l = [10,20,30,40]
for i in l:
    print(i)

s = "gfg"
for ch in s:
    print(ch)

for x in range(5):
    print(x)

for y in range(20):
    if y%6 == 0:
        print(y)

for i in range(len(l)):
    print(l[i])

n = int(input("Enter a number: "))
m = int(input("Number or multiple: "))
for i in range(1,m+1):
    print(n*i,end=" ")