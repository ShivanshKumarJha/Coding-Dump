import sys
sys.path.append('')
from BinaryTrees.BinaryTreeNode import BinaryTreeNode, printTreeDetailed

def f(arr,s,e):
    if s > e: return None
    mid = s + (e-s) // 2
    root = BinaryTreeNode(arr[mid])
    root.left = f(arr,s,mid-1)
    root.right = f(arr,mid+1,e)
    return root

def convert(arr):
    return f(arr,0,len(arr)-1)

if __name__ == '__main__':
    arr = [1,2,3,4,5,6,7]
    root = convert(arr)
    printTreeDetailed(root)