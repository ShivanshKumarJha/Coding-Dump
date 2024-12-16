def countDistinct(arr):
    s = set()
    for i in arr:
        s.add(i)
    return len(s)

arr = [1, 2, 3, 3, 3, 3, 4]
print(countDistinct(arr))