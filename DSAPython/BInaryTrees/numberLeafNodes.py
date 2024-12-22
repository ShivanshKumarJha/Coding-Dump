from BinaryTreeNode import BinaryTreeNode

def numberLeafNodes(root):
    if root is None: return 0
    if root.left is None and root.right is None: return 1
    return numberLeafNodes(root.left) + numberLeafNodes(root.right)

if __name__ == '__main__':
    root = BinaryTreeNode(1)
    root.left = BinaryTreeNode(2)
    root.right = BinaryTreeNode(3)
    root.left.left = BinaryTreeNode(4)
    root.left.right = BinaryTreeNode(5)
    root.right.left = BinaryTreeNode(6)
    root.right.right = BinaryTreeNode(7)
    print(f"Number of leaf nodes are : {numberLeafNodes(root)}")