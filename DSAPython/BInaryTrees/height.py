from BinaryTreeNode import BinaryTreeNode

def height(root):
    if root is None: return 0

    leftHeight = height(root.left)
    rightHeight = height(root.right)
    return 1 + max(leftHeight,rightHeight)

if __name__ == '__main__':
    root = BinaryTreeNode(1)
    root.left = BinaryTreeNode(2)
    root.right = BinaryTreeNode(3)
    root.left.left = BinaryTreeNode(4)
    root.left.right = BinaryTreeNode(5)
    print(f"Height of tree is : {height(root)}")