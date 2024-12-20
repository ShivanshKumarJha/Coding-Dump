class Student:
	def __init__(self,name,rollNumber):
		self.name = name
		self.rollNumber = rollNumber


s1 = Student("Shivansh",12)
print(s1.__dict__)

s2= Student("Ravi",13)
print(s2.__dict__)