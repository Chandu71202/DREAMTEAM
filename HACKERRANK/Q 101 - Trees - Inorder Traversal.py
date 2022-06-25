# Your task is to implement the following function :

# void inorder(TreeNode*)
# You will be working with the following structure :

# struct TreeNode {
# 	int x;
#     struct TreeNode* L;
#     struct TreeNode* R;
# }
# You may only edit the BODY of the code, leaving the HEAD and the TAIL as it is.

# Sample Input 0

# 7
# 4 2 1 3 6 7 5
# Sample Output 0

# 1 2 3 4 5 6 7 


class BinaryTreeNode:
  def __init__(self, data):
    self.data = data
    self.leftChild = None
    self.rightChild=None
    
def insert(root,newValue):
    if root is None:
        root=BinaryTreeNode(newValue)
        return root

    if newValue<root.data:
        root.leftChild=insert(root.leftChild,newValue)
    else:
        root.rightChild=insert(root.rightChild,newValue)
    return root

def inorder(root):
        if root==None:
            return
        inorder(root.leftChild)
        print(root.data,end=" ")
        inorder(root.rightChild)     
              
n=int(input())
l=list(map(int,input().split()))
root=insert(None,l[0])
for i in range(1,n):
    insert(root,l[i])
inorder(root)
