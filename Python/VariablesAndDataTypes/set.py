# Distinct elements, unordered, no indexing
# union, intersection, set difference etc. are fast
# Uses hashing internally

# Insertion Operations
s1 = {10,20,30}
print(s1)                       #10,20,30

s2 = set([20,30,40])            #40,20,30
print(s2)

s3 = {}
print(type(s3))                 #<class,'dict'>

s4 = set()
print(type(s4))                 #<class,'set'>
print(s4)                       #set()

s = {10,20}                     #10,20
s.add(30)
print(s)                        #10,20,30

s.add(30)
print(s)                        #10,30,20

s.update([40,50])
print(s)                        #40,10,50,20,30

s.update({60,70},[80,90])
print(s)                        #70,40,10,80,50,20,90,60,30


# Removal Operations
s = {10,20,30,40}
s.discard(30)
print(s)                        #10,40,20

s.remove(20)
print(s)                        #40,10

s.clear()
print(s)                        #set()

s.add(50)
del s                           #whole object is deleted
#print(s)                       #s as object is removed

#If the element specified to discard is not present then it will not do anything
#but remove() will throw an error if the element is not present

# Some more operations
s = {10,30,20,40}
print(len(s))                   #4
print(20 in s)                  #True
print(50 in s)                  #False

# Operations on two sets(Part 1)
s1 = {2,4,6,8}
s2 = {3,6,9}

print(s1 | s2)                  #union - 2,3,4,6,8,9
print(s1 & s2)                  #intersection - 6
print(s1 - s2)                  #set difference - 8,2,4
print(s1 ^ s2)                  #symmetric difference - 2,3,4,8,9 - elements present either in s1 or s2 but not common in both sets

# Operations on two sets(Part 2)
s1 = {2,4,6,8}
s2 = {4,8}
print(s1.isdisjoint(s2))        #False - two common elements(4,8)
print(s1 <= s2)                 #False - s1.issubset(s2) whether s1 is subset of s2 or not
print(s1 < s2)                  #False - whether s1 is proper subset of s2 or not
print(s1 >= s2)                 #True - s1.issuperset(s2) whether s1 is superset of s2 or not
print(s1 > s2)                  #True - whether s1 is proper superset of s2 or not