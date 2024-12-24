import heapq

li = [1,5,4,7,8,9,2,3]

# Building the max heap
heapq._heapify_max(li)
print(li)

# Pop the maximum element
print(heapq._heappop_max(li))

# Pop and return the current largest value, and add the new item.
heapq._heapreplace_max(li,12)

# Pushing the element
li.append(6)
heapq._siftdown_max(li,0,len(li)-1)
print(li)