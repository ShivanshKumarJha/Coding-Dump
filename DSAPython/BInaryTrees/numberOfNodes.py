from BinaryTreeNode import BinaryTreeNode

def numberOfNodes(root):
    if root is None:
        return 0
    
    return 1 + numberOfNodes(root.left) + numberOfNodes(root.right)

if __name__ == '__main__':
    root = BinaryTreeNode(1)
    root.left = BinaryTreeNode(2)
    root.right = BinaryTreeNode(3)
    root.left.left = BinaryTreeNode(4)
    root.left.right = BinaryTreeNode(5)
    root.right.left = BinaryTreeNode(6)
    print(f"Number of Nodes in the Binary Tree : {numberOfNodes(root)}")