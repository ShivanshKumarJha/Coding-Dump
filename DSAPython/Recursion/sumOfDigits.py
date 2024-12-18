def sumOfDigits(n):
	if n < 10:
		return n
	return n%10 + sumOfDigits(n//10);

n = int(input("Enter the number: "))
print(sumOfDigits(n))