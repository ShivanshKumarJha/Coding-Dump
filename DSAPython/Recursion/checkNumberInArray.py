def checkNumberInArray(arr,i,x):
	if i == len(arr):
		return False
	if arr[i] == x:
		return True
	return checkNumberInArray(arr,i+1,x)

l = [1,2,3,4,5]
print(checkNumberInArray(l,0,1))