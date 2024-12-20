class Student:
	pass

s1 = Student()
print(s1)

s2 = Student()
s3 = Student()

s1.name = "Shivansh"
s2.rollNo = 12114138
s3.name = "Ravi"
s3.rollNo = 12114123

# To get all the attributes of a particular object
print(s3.__dict__)

print(hasattr(s1,"name"))
print(getattr(s1,"name"))
print(getattr(s2,"name","NA"))
delattr(s3,"rollNo")
print(s3.__dict__)