def height(root):
    if root is None: return 0
    return 1 + max(height(root.left),height(root.right))

def isBalanced(root):
    if root is None: return True

    leftHeight = height(root.left)
    rightHeight = height(root.right)

    if abs(leftHeight - rightHeight) > 1:
        return False
    
    return isBalanced(root.left) and isBalanced(root.right)

def isBalanced2(root):
    if root is None: return 0, True

    leftHeight, isLeftBalanced = isBalanced2(root.left)
    rightHeight, isRightBalanced = isBalanced2(root.right)

    if abs(leftHeight - rightHeight) > 1:
        return 1 + max(leftHeight,rightHeight), False
    
    return 1 + max(leftHeight,rightHeight), isLeftBalanced and isRightBalanced


if __name__ == '__main__':
    from BinaryTreeNode import BinaryTreeNode
    root = BinaryTreeNode(1)
    root.left = BinaryTreeNode(2)
    root.right = BinaryTreeNode(3)
    root.left.left = BinaryTreeNode(4)
    root.left.right = BinaryTreeNode(5)
    print(f"Is Tree Balanced : {isBalanced2(root)}")
    root.right.left = BinaryTreeNode(6)
    root.right.right = BinaryTreeNode(7)
    print(f"Is Tree Balanced : {isBalanced2(root)}")
    root.right.right.right = BinaryTreeNode(8)
    print(f"Is Tree Balanced : {isBalanced2(root)}")