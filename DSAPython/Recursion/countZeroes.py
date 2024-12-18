def countZeroes(n):
	if n < 10:
		return n == 0
	return (n%10 == 0) + countZeroes(n//10);

n = int(input("Enter the number: "))
print(countZeroes(n))