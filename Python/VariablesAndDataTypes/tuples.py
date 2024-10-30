# Tuples are immutable - we can't add items, remove items and also not able to change items once it is created and also faster than the list
t = (10,20,"geek")
print(t)
print(t[0])

t = ()
print(type(t))          #tuple
print(t)                #()

t = (10)                #it will create the integer value not tuple
print(type(t))          #int

t = (10,)               #this will create tuple with single item/element
print(type(t))          #tuple

t = 10,20,30,40,10
print(t[2])             #30
print(t[-1])            #10
print(t[1:3])           #(20,30) - elements from index 1 to 2(3-1)
print(len(t))           #5
print(t.count(10))      #2
print(t.count(20))      #1