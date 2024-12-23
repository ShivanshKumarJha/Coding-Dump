import sys
sys.path.append('')
from BinaryTrees.BinaryTreeNode import BinaryTreeNode
from convertArray import convert

def isBST(root):
    if not root: 
        return float('inf'),float('-inf'),True
    
    leftMin, leftMax, isLeftBST = isBST(root.left)
    rightMin, rightMax, isRightBST = isBST(root.right)

    minimum = min(leftMin,rightMin,root.data)
    maximum = max(leftMax,rightMax,root.data)
    isTreeBST = True

    if root.data <= leftMax or root.data > rightMin:
        isTreeBST = False
    if not isLeftBST or not isRightBST:
        isTreeBST = False

    return minimum, maximum, isTreeBST


def checkBSTHelper(root,mini,maxi):
    if not root: return True
    if root.data <= mini or root.data >= maxi: return False
    return checkBSTHelper(root.left,mini,root.data) and checkBSTHelper(root.right,root.data,maxi)

def isBST2(root):
    return checkBSTHelper(root,float('-inf'),float('inf'))


if __name__ == '__main__':
    '''
        arr = [1,2,3,4,5,6,7]
        root = convert(arr)
        print(isBST(root)[2])

        arr = [1,2,3,5,4,6,7]
        root = convert(arr)
        print(isBST(root)[2])
    '''
    arr = [1,2,3,4,5,6,7]
    root = convert(arr)
    print(isBST2(root))

    arr = [1,2,3,5,4,6,7]
    root = convert(arr)
    print(isBST2(root))