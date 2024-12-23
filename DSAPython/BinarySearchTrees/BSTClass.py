class BinaryTreeNode:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

class BST:
    def __init__(self):
        self.root = None
        self.numNode = 0

    # For printing the BST
    def printTreeHelper(self,root):
        if root is None: return 
    
        print(f"{root.data} : ",end="")
        if root.left is not None:
            print(f"L:{root.left.data}, ",end="")
        if root.right is not None:
            print(f"R:{root.right.data}",end="")

        print()
        self.printTreeHelper(root.left)
        self.printTreeHelper(root.right)

    def printTree(self):
        self.printTreeHelper(self.root)
    

    # To check whether the data is present in BST or not
    def isPresentHelper(self,root,data):
        if not root: return False
        if root.data == data: return True
        elif root.data > data: return self.isPresentHelper(root.left,data)
        else: return self.isPresentHelper(root.right,data)

    def isPresent(self,data):
        return self.isPresentHelper(self.root,data)
    

    # To insert a node in BST
    def insertHelper(self,root,data):
        if not root: return BinaryTreeNode(data)
        curr = root

        while curr:
            if curr.data <= data:
                if curr.right: curr = curr.right
                else:
                    curr.right = BinaryTreeNode(data)
                    break
            else:
                if curr.left: curr = curr.left
                else:
                    curr.left = BinaryTreeNode(data)
                    break
        return root

    def insert(self,data):
        self.root = self.insertHelper(self.root,data)
        self.numNode += 1
    

    # To delete a node in BST
    def deleteDataHelper(self,root,data):
        if not root: return False, None
        if root.data < data: 
            deleted, newRightNode = self.deleteDataHelper(root.right,data)
            root.right = newRightNode
            return deleted, root

        elif root.data > data:
            deleted, newLeftNode = self.deleteDataHelper(root.left,data)
            root.left = newLeftNode
            return deleted, root

        else:
            if not root.left and not root.right: 
                return True, None
            
            elif not root.left or not root.right:
                if root.left: return True, root.left
                else: return True, root.right
            
            else:
                curr = root.left
                while curr.right: curr = curr.right
                root.data = curr.data
                deleted, newLeftNode = self.deleteDataHelper(root.left, curr.data)
                root.left = newLeftNode
                return True, root

    def deleteData(self,data):
        deleted, newRoot = self.deleteDataHelper(self.root,data)
        if deleted: self.numNode -= 1
        self.root = newRoot
        return deleted


    # To count the total nodes present in BST
    def count(self):
        return self.numNode
    

if __name__ == '__main__':
    b = BST()
    b.insert(10)
    b.insert(5)
    b.insert(12)
    print(b.isPresent(10))
    print(b.isPresent(7))
    b.deleteData(4)
    b.deleteData(10)
    print(b.count())
    b.printTree()