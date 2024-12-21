from collections import deque

def modifyQueue(self, q, k):
    l = []
    for i in range(k):
        l.append(q.popleft())
        
    while l:
        q.append(l.pop())
        
    for i in range(len(q) - k):
        q.append(q.popleft())
        
    return q

if __name__ == '__main__':
    q = deque()
    q.append(1)
    q.append(2)
    q.append(3)
    q.append(4)
    q.append(5)
    q.append(6)
    q.append(7)
    q.append(8) 
    k = 4
    print(f"Initial queue: {q}")
    print(f"Modified queue: {modifyQueue(None, q, k)}")