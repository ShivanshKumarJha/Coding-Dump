import queue

def reverseQueue(self, q):
    l = []
    qu = queue.Queue()
    
    while not q.empty():
        ele = q.get()
        l.append(ele)
        
    while l:
        qu.put(l.pop())
        
    return qu

if __name__ == '__main__':
    q = queue.Queue()
    q.put(1)
    q.put(2)
    q.put(3)
    q.put(4)
    q.put(5)
    q.put(6)
    q.put(7)
    q.put(8)
    print(f"Initial queue: {q.queue}")
    print(f"Reversed queue: {reverseQueue(None, q).queue}")