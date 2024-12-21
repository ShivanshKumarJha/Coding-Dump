# from stackUsingArray import Stack
from stackUsingLL import Stack

s = Stack()
s.push(12)
s.push(13)
print(f"Size of stack is {s.size()}")
print(f"Top element is {s.top()}")
deletedELe = s.pop()
print(f"Deleted Element: {deletedELe}")
print(f"Top element is {s.top()}")
print(s.isEmpty())