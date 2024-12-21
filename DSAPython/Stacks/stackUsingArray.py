class Stack:
    def __init__(self):
        self.__data = []

    def push(self, item):
        self.__data.append(item)

    def pop(self):
        if len(self.__data) == 0:
            return None
        return self.__data.pop()

    def top(self):
        if len(self.__data) == 0:
            return None
        return self.__data[-1]

    def isEmpty(self):
        return len(self.__data) == 0

    def size(self):
        return len(self.__data)