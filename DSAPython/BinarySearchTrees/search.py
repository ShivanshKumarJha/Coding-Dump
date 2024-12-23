import sys
sys.path.append('')
from BinaryTrees.BinaryTreeNode import BinaryTreeNode

def searchNode(root,p):
    if not root: return None
    if root.data == p: return root
    elif root.data > p: return searchNode(root.left,p)
    else: return searchNode(root.right,p)

if __name__ == '__main__':
    root = BinaryTreeNode(4)
    root.left = BinaryTreeNode(2)
    root.right = BinaryTreeNode(6)
    root.left.left = BinaryTreeNode(1)
    root.left.right = BinaryTreeNode(3)
    print(f"{searchNode(root,2)}")
    root.right.left = BinaryTreeNode(5)
    root.right.right = BinaryTreeNode(7)
    print(f"{searchNode(root,5)}")
    root.right.right.right = BinaryTreeNode(8)
    print(f"{searchNode(root,9)}")