def getSmaller(l,x):
    res = []
    for i in l:
        if i < x:
            res.append(i)
    return res

l = [8,100,20,40,3,7]
x = 10
print(getSmaller(l,x))