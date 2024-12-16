# Shortcut syntax to create another list from another iterable(Range Functions, set, tuple, list etc.)

# List Comprehensions
l1 = [x for x in range(11) if x%2 == 0]
print(l1)

l2 = [x for x in range(11) if x%2 != 0]
print(l2)

s = "geeksforgeeks"
l1 = [x for x in s if x in "aeiou"]
print(l1)

l2 = ["geeks","ide","courses","gfg"]
l3 = [x for x in l2 if x.startswith("g")]
print(l3)

l4 = [x*2 for x in range(6)]
print(l4)

l1 = ["geeks","for","geeks","gfg","ide"]
l2 = [x.upper() for x in l1 if x.startswith("geek")]
print(l2)


# Set comprehensions
l = [10,20,3,4,10,20,7,3]
s1 = {x for x in l if x%2 == 0}
s2 = {x for x in l if x%2 != 0}
print(s1)
print(s2)

# Dictionary comprehensions
l1 = [1,3,4,2,5]
d1 = {x:x**3 for x in l1}
d2 = {x:f"ID{x}" for x in range(5)}
print(d2)

l2 = [101,103,102]
l3 = ['gfg','ide','course']
d3 = {l2[i]:l3[i] for i in range(len(l2)) }
print(d3)

d4 = dict(zip(l2,l3))
print(d4)

# Inverting dictionary
d1 = {101:'gfg',103:'practice',102:'ide'}
d2 = {v:k for (k,v) in d1.items() }
print(d2)