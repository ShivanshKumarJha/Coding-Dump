from Node import Node

class Stack:
    def __init__(self):
        self.__head = None
        self.__count = 0

    def push(self,item):
        newNode = Node(item)
        newNode.next = self.__head
        self.__head = newNode
        self.__count += 1

    def pop(self):
        if self.__count == 0:
            return None
        ele = self.__head.data
        self.__head = self.__head.next
        self.__count -= 1
        return ele
    
    def top(self):
        if self.__count == 0:
            return None
        return self.__head.data
    
    def isEmpty(self):
        return self.__count == 0
    
    def size(self):
        return self.__count