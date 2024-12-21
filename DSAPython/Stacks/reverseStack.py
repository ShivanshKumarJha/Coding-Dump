def insertAtBottom(stack, ele):
    if len(stack) == 0:
        stack.append(ele)
        return
    topEle = stack[-1]
    stack.pop()
    insertAtBottom(stack, ele)
    stack.append(topEle)

def reverseStack(stack):
    if len(stack) != 0:
        ele = stack[-1]
        stack.pop()
        reverseStack(stack)
        insertAtBottom(stack, ele)
    
stack = [1, 2, 3, 4, 5]
print(f"Original Stack: {stack}")
reverseStack(stack)
print(f"Reversed Stack: {stack}")