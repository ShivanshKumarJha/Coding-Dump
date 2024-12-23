d = {"the":1,"a":5,1000:"abc"}
print(type(d))
print(len(d))

b = d.copy()
print(b)

c = dict([("the",1),("a",2),("berry",5)])
print(c)

d = dict.fromkeys(["abc",32,4])
print(d)

e = dict.fromkeys(["abc",32,4],10)
print(e)