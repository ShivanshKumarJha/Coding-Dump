def downHeapify(arr,i,n):
    parentIndex = i
    leftChildIndex = 2 * parentIndex + 1
    rightChildIndex = 2 * parentIndex + 2

    while leftChildIndex < n:
        minIndex = parentIndex
        if arr[minIndex] > arr[leftChildIndex]: 
            minIndex = leftChildIndex
        if rightChildIndex < n and arr[minIndex] > arr[rightChildIndex]: 
            minIndex = rightChildIndex
        
        if minIndex == parentIndex: break

        arr[parentIndex], arr[minIndex] = arr[minIndex], arr[parentIndex]
        parentIndex = minIndex
        leftChildIndex = 2 * parentIndex + 1
        rightChildIndex = 2 * parentIndex + 2

def heapSort(arr):
    n = len(arr)
    # Build the heap
    for i in range(n//2-1,-1,-1):
        downHeapify(arr,i,n)

    # Removing n elements from heap and put them at correct position
    for i in range(n-1,0,-1):
        arr[0],arr[i] = arr[i],arr[0]
        downHeapify(arr,0,i)

if __name__ == '__main__':
    arr = [int(ele) for ele in input().split()]
    heapSort(arr)
    print(f"In decreasing order: {arr}")
    arr.reverse()
    print(f"In increasing order: {arr}")

# Time complexity is O(N) and Space complexity is O(1)