r = range(5)                #return the object which are having value from 0 to x - 1
print(r)                    #range(0, 5)
l = list(r)
print(l)                    #[0, 1, 2, 3, 4]

print(type(r))              #<class 'range'>


# 2nd type of range() where we will provide 2 parameters
r = range(10,20)
l = list(r)
print(l)                    #[10, 11, 12, 13, 14, 15, 16, 17, 18, 19]

# 3rd type of range() where we will provide 3 parameters
r = range(10,20,2)
l = list(r)
print(l)                    #[10, 12, 14, 16, 18]