import heapq

li = [1,5,11,8,7,9,4]

# Building the min heap
heapq.heapify(li)
print(li)

# Push the element
heapq.heappush(li,2)
print(li)

# Pop the minimum element
print(heapq.heappop(li))

# Pop and return the current smallest value, and add the new item.
heapq.heapreplace(li,6)

# Push item on the heap, then pop and return the smallest item from the heap.
heapq.heappushpop(li,11)