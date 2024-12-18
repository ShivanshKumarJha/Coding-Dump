def printFirstN(n):
	if n == 0:
		return
	printFirstN(n-1)
	print(n)

n = int(input("Enter the number: "))
printFirstN(n)