def binarySearch(arr,x):
    low = 0
    high = len(arr)-1
    while low <= high:
        mid = (low+high)//2
        if arr[mid] == x:
            return mid
        elif arr[mid] < x:
            low = mid+1
        else:
            high = mid-1
    return -1

l = [2,3,4,10,40]
x = 10
print(binarySearch(l,x))