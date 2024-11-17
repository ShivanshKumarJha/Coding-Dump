# Containers that store the elements and also it is 0 based indexing
l = [10,20,30,40,50]
print(l)
print(l[3])  #40
print(l[-1]) #50
print(l[-2]) #40

l.append(30)
print(l)                    #10 20 30 40 50 30
l.insert(1,15)              #insert 15 at index 1
print(l)                    #10 15 20 30 40 50 30   
print(15 in l)              #True - whether present or not
print(l.count(30))          #2- Number of occurrences
print(l.index(30))          #3 - First occurrence index if exists otherwise will throw error

# element, start index(inclusive), end index(exclusive) 
print(l.index(30,4,7))

l = [10,20,30,40,50,60,70,80]
l.remove(20)                #remove the particular element if it exists otherwise it will throw error
print(l)                    #10 30 40 50 60 70 80

print(l.pop())              #remove the last element - 80
print(l)                    #10 30 40 50 60 70

print(l.pop(2))             #remove the element from the given index - 40
print(l)                    #10 30 50 60 70

del l[1]                    #delete the item at index 1
print(l)                    #10 50 60 70

del l[0:2]                  #delete the element start from 0 to 1(2-1)
print(l)                    #60 70

l = [10,40,20,50]
print(max(l))
print(min(l))
print(sum(l))
l.reverse()
print(l)
l.sort()
print(l)