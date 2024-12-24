import heapq

def kthLargest(arr,k):
    heap = arr[0:k]
    heapq.heapify(heap)
    n = len(arr)
    for i in range(k,n):
        if heap[0] < arr[i]:
            heapq.heapreplace(heap,arr[i])
    return heap

if __name__ == '__main__':
    # 10 6 7 2 3 8 9 11 1
    arr = [int(ele) for ele in input().split()]
    k = int(input())
    ans = kthLargest(arr,k)
    print(ans[0])