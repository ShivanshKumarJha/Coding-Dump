def firstIndex(arr,i,x):
	if i == len(arr):
		return -1
	if arr[i] == x:
		return i
	return firstIndex(arr,i+1,x)

def lastIndex(arr,i,x):
	if i == -1:
		return -1
	if arr[i] == x:
		return i
	return lastIndex(arr,i-1,x)

l = [1,3,2,5,6,2,8,9]
print(firstIndex(l,0,2))
print(lastIndex(l,len(l)-1,2))