def div(a,b):
	try:
		print(a/b)
	except:
		print("Error!")
	print("Hello")
div(10,0)


try:
	a = int("Shivansh")
except ValueError:
	print("You are trying to convert invalid string to integer")
except ZeroDivisionError:
	print("You are trying to divide a number by zero")
except:
	print("Unknown error")


try:
	print(10/0)
except Exception as e:
	print(str(e))
	print(type(e))


try:
	raise Exception("My custom error")
except Exception as e:
	print(e)


# Custom Exception Class
class MyException(Exception):
	def __init__(self,message):
		self.message = message
	def __str__(self):
		return self.message

try:
	raise MyException("some error")
except Exception as e:
	print(e)
	print(type(e))
	print(e.message)


# else : will always execute if the try block didn't threw any error
# finally : will always execute, used to cleanup code
try:
	print("Hello World")
	print(10/0)
except:
	print("OK error occured")
else:
	print("Woah")
finally:
	print("Bye bye world")


def fun():
	try:
		return 1
	except:
		return 2
	else:
		return 3
	finally:
		return 4

print(fun())		# Output : 4