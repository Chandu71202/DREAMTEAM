from sys import stdin, setrecursionlimit
from queue import Queue
setrecursionlimit(10**7)

# Following is the TreeNode class structure:
class BinaryTreeNode:
    def __init__(self, data):
        self.val = data
        self.left = None
        self.right = None

def getTopView(root):
    # Write your code here.
    q=[]
    m=dict()
    hd=0
    root.hd=hd
    q.root()
    while(q):
        root=q[0]
        hd=root.hd
        if hd not in m:
            m[hd]=root.data
        if(root.left):
            root.left.hd=hd-1
            q.append(root.left)
        if(root.right):
            root.right.hd=hd+1
            q.append(root.right)
        q.pop()
        for i in sorted(m):
            print(m[i],end=" ")
        
# Taking input.
def takeInput():

    arr = list(map(int, stdin.readline().strip().split(" ")))

    rootData = arr[0]

    n = len(arr)

    if(rootData == -1):
        return None

    root = BinaryTreeNode(rootData)
    q = Queue()
    q.put(root)
    index = 1
    while(q.qsize() > 0):
        currentNode = q.get()

        leftChild = arr[index]

        if(leftChild != -1):
            leftNode = BinaryTreeNode(leftChild)
            currentNode.left = leftNode
            q.put(leftNode)

        index += 1
        rightChild = arr[index]

        if(rightChild != -1):
            rightNode = BinaryTreeNode(rightChild)
            currentNode .right = rightNode
            q.put(rightNode)

        index += 1

    return root

# Printing the tree nodes.
def printAns(ans):
    for x in ans:
        print(x, end=" ")
    print()


# Main.
T = int(input().strip())
for i in range(T):
    root = takeInput()
    ans = getTopView(root)
    printAns(ans)
