#include <iostream>
using namespace std;

struct BST
{
    int data;
    BST* left;
    BST* right;
};

BST* NewNode(int data)
{
    BST* newNode=(BST*)malloc(sizeof(BST));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
BST* Insert(BST* root, int data)
{
    
    if(root==NULL)
    {
        root=NewNode(data);
    }
    else if(data<=root->data)
    {
        root->left=Insert(root->left,data);
    }
    else
    {
        root->right=Insert(root->right,data);
    }
    return root;
}

void Inorder(BST* root)
{
    if(root==NULL)
    return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Search(BST* root,int data)
{
    if(root==NULL)
    cout<<"Element Not Found";
    if(root->data>data)
    Search(root->left,data);
    else if(root->data<data)
    Search(root->right,data);
    else if(root->data==data)
    cout<<"Yes Element found";
}
int main()
{
    BST* root=NULL;
    root=Insert(root,10);
    root=Insert(root,5);
    root=Insert(root,15);
    root=Insert(root,20);
    root=Insert(root,1);
    Inorder(root);
    Search(root,10);
    return 0;
}
