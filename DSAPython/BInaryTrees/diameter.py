from BinaryTreeNode import BinaryTreeNode

def diameter(root):
    if root is None: return 0,0

    leftDiameter, leftHeight = diameter(root.left)
    rightDiameter, rightHeight = diameter(root.right)

    return max(leftDiameter,rightDiameter,leftHeight+rightHeight), 1 + max(leftHeight,rightHeight)

if __name__ == '__main__':
    root = BinaryTreeNode(1)
    root.left = BinaryTreeNode(2)
    root.right = BinaryTreeNode(3)
    root.left.left = BinaryTreeNode(4)
    root.left.right = BinaryTreeNode(5)
    root.right.left = BinaryTreeNode(6)
    root.right.right = BinaryTreeNode(7)
    print(f"Diameter of the tree is : {diameter(root)[0]}")
    root.right.right.right = BinaryTreeNode(8)
    print(f"Diameter of the tree is : {diameter(root)[0]}")
    root.right.right.right.right = BinaryTreeNode(9)
    print(f"Diameter of the tree is : {diameter(root)[0]}")
    