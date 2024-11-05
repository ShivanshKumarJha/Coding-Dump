# Collection of key-value pairs, unordered
# All keys must be distinct, values may be repeated
# Uses hashing internally

d = {110:"abc",101:"xyz",105:"pqr"}
print(d)

d = {}
d["laptop"] = 40000
d["mobile"] = 15000
d["earphone"] = 1000
print(d)
print(d["mobile"])

d = {110:"abc",101:"xyz",105:"pqr"}
print(d.get(101))           #xyz
print(d.get(125))           #None - as it is not present
print(d.get(125,"NA"))      #Give output otherwise NA if not present
if 125 in d:
    print(d[125])
else:
    print("NA")

d = {110:"abc",101:"xyz",105:"pqr",106:"bcd"}
d[101] = "wxy"
print(d)                    #{110: 'abc', 101: 'wxy', 105: 'pqr', 106: 'bcd'}
print(len(d))               #4

print(d.pop(105))           #pqr
print(d)                    #{110: 'abc', 101: 'wxy', 106: 'bcd'}

del d[106]
print(d)                    #{110: 'abc', 101: 'wxy'}

d[108] = "cde"
print(d.popitem())          #(108, 'cde') - removes the last inserted item