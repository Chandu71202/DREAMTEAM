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

int findnthnodefromend(struct Node* head,int pos)
{
    struct Node* p=head;
    struct Node* q=head;
    for(int i=0;i<=pos-2;i++)
    p=p->next;
    while(p->next)
    {
        p=p->next;
        q=q->next;
    }
    return q->data;

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
    //head=inser_end(head,value);
    int a,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        head=insert_end(head,a);
    }
    int pos;
    cin>>pos;
    cout<<findnthnodefromend(head,pos);

}