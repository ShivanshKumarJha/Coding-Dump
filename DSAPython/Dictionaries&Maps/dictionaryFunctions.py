a = {1:2,3:4,"list":[1,23],"dict":{1:2}}
print(a)

print(a['list'])
a.get(1)

# get will not throw error but [] will throw error if key is not present in dictionary
print(a.get('li'))

# If key is present then it will give the corresponding value of that key but if it is not present then it will give the second parameter as an output
print(a.get('lis',0))   
a.keys()
a.values()
a.items()

for i in a:
    print(i,a[i])

for i in a.values():
    print(i)

# To check if a key is present or not in a dictionary
"list" in a
"li" in a
2 in a

# Add and update the key
a['t'] = (1,2,3)
a
a[1] = 10

b = {3:5, 'the':4, 2:100}
a.update(b)
a

# Removing the key
a.pop('t')
a
del a['list']
a
a.pop('dict')
a.clear()
del a