class BinaryTreeNode:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

    def __str__(self):
        return str(self.data)
    
    
def treeInput():
    rootData = int(input())
    if rootData == -1: return None
    root = BinaryTreeNode(rootData)

    leftTree = treeInput()
    rightTree = treeInput()
    root.left = leftTree
    root.right = rightTree
    return root
    

def printTreeDetailed(root):
    if root is None: return 
    
    print(f"{root.data} : ",end="")
    if root.left is not None:
        print(f"L:{root.left.data}, ",end="")
    if root.right is not None:
        print(f"R:{root.right.data}",end="")

    print()
    printTreeDetailed(root.left)
    printTreeDetailed(root.right)


# This is pre-order traversal : Root -> Left -> Right
def preOrder(root):
    if root is None:
        return
    print(root.data,end=" ")
    preOrder(root.left)
    preOrder(root.right)


# This is post-order traversal : left -> Right -> Root
def postOrder(root):
    if root is None: return
    postOrder(root.left)
    postOrder(root.right)
    print(root.data,end=" ")


# This is in-order traversal : Left -> Root -> Right
def inOrder(root):
    if root is None: return
    inOrder(root.left)
    print(root.data,end=" ")
    inOrder(root.right)


if __name__ == '__main__':
    '''
        root = BinaryTreeNode(1)
        root.left = BinaryTreeNode(2)
        root.right = BinaryTreeNode(3)
        printTreeDetailed(root)

        print(f"PreOrder Traversal : ",end=" ")
        preOrder(root)
        print()

        print(f"PostOrder Traversal : ",end=" ")
        postOrder(root)
        print()

        print(f"InOrder Traversal : ",end=" ")
        inOrder(root)
        print()
    '''

    root = treeInput()
    printTreeDetailed(root)