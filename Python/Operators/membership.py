# String : Check for substring
# Dictionary : Check for key
# List, Set, Tuple, etc. : Check for memberships
# in, not in

s = "geeksforgeeks"
print("g" in s)         #True
print("for" in s)       #True
print("gk" in s)        #False

d = {10:"abc",20:"efg"}
print(10 in d)          #True
print(15 in d)          #False
print("abc" in d)       #False

l = [10,20,30,15]
print(30 in l)          #True
print([20,30] in l)     #False
