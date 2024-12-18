def fibonacci(n):
	if n == 1 or n == 2:
		return 1
	return fibonacci(n-1)+ fibonacci(n-2)

n = int(input("Enter the number: "))
print(fibonacci(n))