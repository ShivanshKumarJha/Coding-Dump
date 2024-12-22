from BinaryTreeNode import BinaryTreeNode
import queue

def takeLevelWiseInput():
    q = queue.Queue()
    print("Enter root data :")
    rootData = int(input())
    if rootData == -1: return None

    root = BinaryTreeNode(rootData)
    q.put(root)
    while not q.empty():
        currentNode = q.get()
        print(f"Enter left child of {currentNode.data}")
        leftChildData = int(input())

        if leftChildData != -1:
            leftChild = BinaryTreeNode(leftChildData)
            currentNode.left = leftChild
            q.put(leftChild)

        print(f"Enter right child of {currentNode.data}")
        rightChildData = int(input())

        if rightChildData != -1:
            rightChild = BinaryTreeNode(rightChildData)
            currentNode.right = rightChild
            q.put(rightChild)
    return root


def printLevelWise(root):
    if root is None: return
    q = queue.Queue()
    q.put(root)

    while not q.empty():
        currentNode = q.get()
        print(f"{currentNode.data}:",end="")
        if currentNode.left is not None:
            print(f"L:{currentNode.left.data}",end=",")
            q.put(currentNode.left)
        if currentNode.right is not None:
            print(f"R:{currentNode.right.data}",end="")
            q.put(currentNode.right)
        print()
    

if __name__ == '__main__':
    root = takeLevelWiseInput()
    printLevelWise(root)
