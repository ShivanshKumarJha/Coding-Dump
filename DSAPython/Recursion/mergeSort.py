def merge(a1,a2,a):
	i = 0 
	j = 0
	k = 0
	while i < len(a1) and j < len(a2):
		if a1[i] < a2[j]:
			a[k] = a1[i]
			i += 1
		else:
			a[k] = a2[j]
			j += 1
		k += 1

	while i < len(a1):
		a[k] = a1[i]
		i += 1	
		k += 1

	while j < len(a2):
		a[k] = a2[j]
		j += 1	
		k += 1

def mergeSort(arr):
	if len(arr) == 1 or len(arr) == 0:
		return 
	mid = len(arr) // 2
	a1 = arr[0:mid]
	a2 = arr[mid:]

	mergeSort(a1)
	mergeSort(a2)

	merge(a1,a2,arr)

l = [5,3,1,2,74,23,45,43,41]
mergeSort(l)
print(l)