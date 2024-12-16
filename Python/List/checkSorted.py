def isSorted(arr):
    i = 1
    while i < len(arr):
        if arr[i] < arr[i-1]:
            return False
        i += 1
    return True

def isSorted2(arr):
    rArr = sorted(arr)
    if arr == rArr:
        return True
    else:
        return False

l = [1,2,3,4,5]
print(isSorted(l))

l = [1,10,3,7,6]
print(isSorted2(l))