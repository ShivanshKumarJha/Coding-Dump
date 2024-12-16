s1 = "geeksforgeeks"
s2 = "geeks"
print(s2 in s1)
print(s1 not in s2)

s3 = s1 + s2
s4 = "Welcome to " + s1
print(s3)
print(s4)

# If given substring is not there in the string then it will throw error
print(s1.index(s2))             # First Occurrence
print(s1.rindex(s2))            # Last Occurrence
print(s1.index(s2,0,13))        # To find the index in the given range

s1 = "Geeks"
print(len(s1))
s2 = s1.upper()
print(s2)
s3 = s1.lower()
print(s3)
print(s1.islower())
print(s2.isupper())

s = "GeeksforGeeks Python Course"
print(s.startswith("Geeks"))
print(s.endswith("Course"))
print(s.startswith("Geeks",1))
print(s.startswith("Geeks",8,len(s)))

s1 = "geeks for geeks"
print(s1.split())

s2 = "geeks,for,geeks"
print(s2.split(","))

l = ["geeksforgeeks","python","course"]
print(" ".join(l))
print(",".join(l))

s = "--geeksforgeeks--"
print(s.strip("-"))         # remove all - in the string
print(s.lstrip("-"))        # remove all - from left of the string
print(s.rstrip("-"))        # remove all - from right of the string

s = "Welcome to GeeksforGeeks"
print(s.replace("to","from"))

# If given string is not there it will return -1
s1 = "geeks for geeks"
s2 = "geeks"
print(s1.find(s2))          # 0
print(s1.find("gfg"))       # -1
n = len(s1)
print(s1.find(s2,1,n))      # 10
