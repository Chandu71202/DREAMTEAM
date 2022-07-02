#include<iostream>
using namespace std;

struct Node
{
    /* data */
    int data;
    struct Node* next;
};

struct Node* insert_end(struct Node* head,int data)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    struct Node* ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    return head;
}


void printLL(struct Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    struct Node* head=NULL;
    //head=insert_end(head,value);
    int a,n;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>n;
        head=insert_end(head,n);
    }
}
