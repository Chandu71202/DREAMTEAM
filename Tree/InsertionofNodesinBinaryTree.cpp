#include<iostream>
using namespace std;

struct tNode
{
    struct tNode* left;
    int data;
    struct tNode* right;
};


tNode *createBinNodes(int data)
{
    int x;
    tNode* newNode;
    
    
    if(data==-1)
        return NULL;
        
    newNode = new tNode{NULL, data, NULL};
    cout<<"Enter left child of "<< data << " (-1 for no child): ";
    cin>>x;
    newNode->left=createBinNodes(x);

    cout<<"Enter right child of "<< data << " (-1 for no child): ";
    cin>>x;
    newNode->right=createBinNodes(x);

    return newNode;
}

tNode *createBinTree()
{
    int data;
    cout<<"Enter root of binary tree: ";
    cin>>data;
    
    return createBinNodes(data);
}

int main()
{
    tNode* root = createBinTree();
}
