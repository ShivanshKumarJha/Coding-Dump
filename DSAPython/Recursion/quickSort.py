def partition(arr,s,e):
	pivot = arr[s]

	# Find the number of elements smaller than pivot
	c = 0
	for i in range(s,e+1):
		if arr[i] < pivot:
			c += 1
	arr[s+c],arr[s] = arr[s],arr[s+c]
	pivotIndex = s + c

	i = s
	j = e
	# Arrange such that smaller elements comes left to pivot element and larger elements comes right side
	while i < j:
		if arr[i] < pivot:
			i += 1
		elif arr[j] >= pivot:
			j -= 1
		else:
			arr[i],arr[j] = arr[j],arr[i]
			i += 1
			j -= 1
	return pivotIndex


def quickSort(arr,s,e):
	if s >= e:
		return

	pivotIndex = partition(arr,s,e)
	quickSort(arr,s,pivotIndex-1)
	quickSort(arr,pivotIndex+1,e)

l = [5,3,1,2,74,23,45,43,41]
quickSort(l,0,len(l)-1)
print(l)