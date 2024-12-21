# for inbuilt stack we can simple use a list 

stack = []
stack.append(12)
stack.append(13)
print(f"Size of stack is {len(stack)}")
print(f"Top element is {stack[-1]}")
deletedELe = stack.pop()
print(f"Deleted Element: {deletedELe}")
print(f"Top element is {stack[-1]}")