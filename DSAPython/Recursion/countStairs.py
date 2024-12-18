def countStairs(i,n):
	if i > n:
		return 0
	if i == n:
		return 1
	return countStairs(i+1,n) + countStairs(i+2,n) + countStairs(i+3,n)

n = int(input("Enter the total stairs: "))
print(countStairs(0,n))