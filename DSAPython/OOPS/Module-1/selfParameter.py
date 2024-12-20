from datetime import date

class Student:

	__passingPercentage = 40

	def __init__(self,name,age=15,percentage=80):
		self.__name = name
		self.age = age
		self.percentage = percentage

	@classmethod 
	def fromBirthYear(cls,name,year,percentage):
		return cls(name,date.today().year - year,percentage)

	def StudentDetails(self):
		print(f"Name = {self.__name}")
		print(f"Age = {self.age}")
		print(f"Percentage = {self.percentage}")

	def isPassed(self):
		if self.percentage > Student.__passingPercentage:
			print("Student is passed")
		else:
			print("Student is not passed")

	@staticmethod 
	def welcomeToSchool():
		print("Hey! Welcome To School")

	@staticmethod
	def isTeen(age):
		return age > 16


s1 = Student("Shivansh")
s2 = Student.fromBirthYear("Ravi",2003,96)

s1.StudentDetails()
s1.isPassed();
s1.welcomeToSchool()
print()

s2.StudentDetails()
s2.isPassed();
s2.welcomeToSchool()
print()

# Name Mangling - object._ClassName__variableName
print(s1._Student__name)