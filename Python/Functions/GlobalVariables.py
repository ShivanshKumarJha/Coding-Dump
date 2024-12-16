# Change the global variable x
def fun():
    global x
    x = 15

x = 15
fun()
print(x)

# access the global variable inside the function
def fun():
    x = 10
    globals()['x'] = 20
    print(x)    # Output as 10 as it refers to the local variable

x = 15
fun()
print(x)        # Output as 20 as it got changed inside the fun()