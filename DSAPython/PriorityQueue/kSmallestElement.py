import heapq

def kSmallest(arr,k):
    heap = arr[0:k]
    heapq._heapify_max(heap)
    n = len(arr)
    for i in range(k,n):
        if heap[0] > arr[i]:
            heapq._heapreplace_max(heap,arr[i])
    return heap

if __name__ == '__main__':
    # 10 6 7 2 3 8 9 11 1
    arr = [int(ele) for ele in input().split()]
    k = int(input())
    ans = kSmallest(arr,k)
    print(ans)