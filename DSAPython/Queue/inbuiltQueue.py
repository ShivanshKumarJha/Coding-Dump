import queue

q = queue.Queue()
q.put(1)
q.put(2)
q.put(3)
q.put(4)
print(f"The size of the queue is: {q.qsize()}")

while not q.empty():
    print(f"The front element is: {q.queue[0]}")
    q.get()

print(q.empty())
print(f"The size of the queue is: {q.qsize()}")
print()

# Using this we can use the stack also
q = queue.LifoQueue()
q.put(1)
q.put(2)
q.put(3)

while not q.empty():
    print(q.get())