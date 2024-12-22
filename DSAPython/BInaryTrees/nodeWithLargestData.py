from BinaryTreeNode import BinaryTreeNode

def nodeWithLargestData(root):
    if root is None: return -1

    leftAns = nodeWithLargestData(root.left)
    rightAns = nodeWithLargestData(root.right)
    return max(root.data,leftAns,rightAns)

if __name__ == '__main__':
    root = BinaryTreeNode(1)
    root.left = BinaryTreeNode(2)
    root.right = BinaryTreeNode(3)
    root.left.left = BinaryTreeNode(4)
    root.left.right = BinaryTreeNode(5)
    root.right.left = BinaryTreeNode(6)
    print(f"Node with largest value is : {nodeWithLargestData(root)}")