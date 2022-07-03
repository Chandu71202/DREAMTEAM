#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* insert_end(struct Node* head,int data)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        return head;
    }
    struct Node* ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newNode;
    return head;
}

struct Node* mergePoint(struct Node* head1,struct Node* head2)
{
    struct Node* p=head1;
    struct Node* q=head2;
    int count1=1;
    int count2=1;
    while(p->next)
    {
        count1=count1+1;
        p=p->next;
    }
    while(q->next)
    {
        count2=count2+1;
        q=q->next;
    }
    int diff=abs(count1-count2);
    if(count1>count2)
    {
        struct Node* ptr1=head1;
        for(int i=0;i<diff;i++)
        ptr1=ptr1->next;
        struct Node* ptr2=head2;
        
        while(ptr1->data!=ptr2->data)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return ptr1;
    }
    else
    {
        struct Node* ptr1=head2;
        for(int i=0;i<diff-1;i++)
        ptr1=ptr1->next;
        struct Node* ptr2=head1;
        
        while(ptr1->data!=ptr2->data)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return ptr1;
    }
}


void printLL(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{
    struct Node* head1=NULL;
    struct Node* head2=NULL;
    struct Node* ans=NULL;
    int a;
    cin>>a;
    int b;
    cin>>b;
    for(int i=0;i<a;i++)
    {
        int x;
        cin>>x;
        head1=insert_end(head1,x);
    }
    for(int i=0;i<b;i++)
    {
        int x;
        cin>>x;
        head2=insert_end(head2,x);
    }
    printLL(head1);
    cout<<endl;
    printLL(head2);
    cout<<endl;
    ans=mergePoint(head1,head2);
    cout<<"MergePoint is : " <<ans->data;
}


// INPUT: 
// 5
// 3
// 1 2 3 4 5
// 3 4 5
 
// OUTPUT:
// 1 2 3 4 5 
// 3 4 5 
// MergePoint is : 3
