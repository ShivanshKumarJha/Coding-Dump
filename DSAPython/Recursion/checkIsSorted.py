def checkIsSorted(arr,i):
	if (i == len(arr) - 1): 
		return True
	if arr[i] > arr[i+1]:
		return False;
	return checkIsSorted(arr,i+1)

l = [1,2,4,5,6]
print(checkIsSorted(l,0))