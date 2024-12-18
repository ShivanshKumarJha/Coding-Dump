def geometricSum(k):
	if k == 0:
		return 1
	return 1/(2**k) + geometricSum(k-1)

k = int(input("Enter the value of k: "))	
print(geometricSum(k))