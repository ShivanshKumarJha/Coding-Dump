def fun(x):
    x = 15

x = 10
fun(x)
print(x)            # Gives the output as 10 only

def fun(l):
    l.append(15)

l = [10,20,30]
fun(l)              # Gives the output as [10,20,30,15]
print(l)

def fun(x):
    print(id(x))
    x = 15          # will now point to different object
    print(id(x))

x = 10
fun(x)
print(id(x))

def fun(l):
    print(id(l))
    l.append(15)    # still point out to the same object
    print(id(l))

l = [10,20,30]
fun(l)
print(id(l))