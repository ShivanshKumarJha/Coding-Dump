def sum(arr,i):
	if i == len(arr):
		return 0;
	return arr[i] + sum(arr,i+1)

l = [1,2,5,3,40]
print(sum(l,0))