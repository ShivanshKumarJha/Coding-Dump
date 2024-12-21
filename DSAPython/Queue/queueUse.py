# from queueUsingArray import Queue
from queueUsingLL import Queue

q = Queue()
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
print(f"The front element is: {q.front()}")
q.dequeue()
print(f"The front element is: {q.front()}")
print(f"The size of the queue is: {q.size()}") 
print(q.isEmpty())

while q.isEmpty() is False:
    q.dequeue()
print(q.isEmpty())