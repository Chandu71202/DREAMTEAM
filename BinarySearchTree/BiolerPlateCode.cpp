#include<iostream>
using namespace std;
struct BST
{
    int data;
    struct BST* left;
    struct BST* right;
};

struct BST* NewNode(int data)
{
    struct BST* newNode=(struct BST*)malloc(sizeof(struct BST));
    newNode->data=data;
    newNode->right=NULL;
    newNode->left=NULL;
    return newNode;
}

struct BST* Insert(struct BST* root, int data)
{
    if(root==NULL)
    {
        root=NewNode(data);
        return root;
    }
    if(root->data<data)
    {
        root->right=Insert(root->right,data);
    }
    else
    {
        root->left=Insert(root->left,data);
    }
    return root;
}

void Inorder(struct BST* root)
{
    if(root!=NULL)
    {
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }
}

struct BST* deleteNode(struct BST* root, int key)
{
    if(root==NULL)
    return root;
    if(key<root->data)
    {
        root->left=deleteNode(root->left,key);
    }
    else if(key>root->data)
    {
        root->right=deleteNode(root->right,key);
    }
    else
    {
        if(root->left==NULL and root->right==NULL)
        return NULL;
        else if(root->left==NULL)
        {
            return root->right;
        }
        else if(root->right==NULL)
        {
            return root->left;
        }
        struct BST* temp=root->right;
        while(temp->left != NULL) temp = temp->left;
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
        
    }
    return root;
}

int main()
{
    struct BST* root=NULL;
    root=Insert(root,10);
    root=Insert(root,20);
    root=Insert(root,30);
    root=Insert(root,40);    
    root=Insert(root,15);
    root=Insert(root,20);
    Inorder(root);
    //10 15 20 20 30 40 
    root=deleteNode(root,30);
    cout<<endl;
    Inorder(root);
    //10 15 20 20 30 
}
