class PriorityQueueNode:
    def __init__(self,value,priority):
        self.value = value
        self.priority = priority

class PriorityQueue:
    def __init__(self):
        self.pq = []

    def getSize(self):
        return len(self.pq)
    
    def isEmpty(self):
        return self.getSize() == 0

    def getMin(self):
        if self.isEmpty is True: return None
        self.pq[0].value

    def __percolateUp(self):
        childIndex = self.getSize() - 1
        while childIndex > 0:
            parentIndex = (childIndex-1) // 2
            if self.pq[childIndex].priority < self.pq[parentIndex].priority:
                self.pq[childIndex], self.pq[parentIndex] = self.pq[parentIndex], self.pq[childIndex]
                childIndex = parentIndex
            else: break

    def insert(self,value,priority):
        pqNode = PriorityQueueNode(value,priority)
        self.pq.append(pqNode)
        self.__percolateUp()

    def __percolateDown(self):
        parentIndex = 0
        leftChildIndex = 2 * parentIndex + 1
        rightChildIndex = 2 * parentIndex + 2

        while leftChildIndex < self.getSize():
            minIndex = parentIndex
            if self.pq[minIndex].priority > self.pq[leftChildIndex].priority: 
                minIndex = leftChildIndex
            if rightChildIndex < self.getSize() and self.pq[minIndex].priority > self.pq[rightChildIndex].priority: 
                minIndex = rightChildIndex
            
            if minIndex == parentIndex: 
                break

            self.pq[parentIndex], self.pq[minIndex] = self.pq[minIndex], self.pq[parentIndex]
            parentIndex = minIndex
            leftChildIndex = 2 * parentIndex + 1
            rightChildIndex = 2 * parentIndex + 2

    def removeMin(self):
        if self.isEmpty(): return None
        ele = self.pq[0].value
        self.pq[0] = self.pq[self.getSize()-1]
        self.pq.pop()
        self.__percolateDown()
        return ele
    
if __name__ == '__main__':
    pass
    pq = PriorityQueue()
    pq.insert('A',10)
    pq.insert('C',5)
    pq.insert('B',19)
    pq.insert('D',4)
    for i in range(4):
        print(f"The size is -> {pq.getSize()}",end=" ")
        print(f"and the minimum element is -> {pq.removeMin()}")