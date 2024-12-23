import sys
sys.path.append('')
from BinaryTrees.BinaryTreeNode import BinaryTreeNode

def printBetween(root,k1,k2):
    if not root: return
    if root.data < k1: printBetween(root.right,k1,k2)
    elif root.data > k2: printBetween(root.left,k1,k2)
    else:
        printBetween(root.left,k1,k2)
        print(root.data,end=" ")
        printBetween(root.right,k1,k2)

if __name__ == '__main__':
    root = BinaryTreeNode(4)
    root.left = BinaryTreeNode(2)
    root.right = BinaryTreeNode(6)
    root.left.left = BinaryTreeNode(1)
    root.left.right = BinaryTreeNode(3)
    root.right.left = BinaryTreeNode(5)
    root.right.right = BinaryTreeNode(7)
    root.right.right.right = BinaryTreeNode(8)
    
    printBetween(root,2,6)
    print()

    printBetween(root,1,8)
    print()