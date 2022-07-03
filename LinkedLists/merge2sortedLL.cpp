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

struct Node* Merge2SortedLL(struct Node* head1,struct Node* head2)
{
    struct Node* p=head1;
    struct Node* q=head2;
    struct Node *s,*newhead;
    if(p==NULL) return q;
    if(q==NULL) return p;
    if(p&&q)
    {
        if(p->data<q->data)
        {
            s=p;
            p=p->next;
        }
        else{
            s=q;
            q=q->next;
        }
        newhead=s;
    }
    while(p&&q)
    {
        if(p->data<q->data)
        {
            s->next=p;
            s=p;
            p=p->next;
        }
        else
        {
            s->next=q;
            s=q;
            q=q->next;
        }
        if(p==NULL)
        {
            s->next=q;
        }
        else
        {
            s->next=p;
        }
    }
    return newhead;
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
    struct Node* head1=NULL;
    struct Node* head2=NULL;
    int a,n1,n2;
    cin>>n1;
    cin>>n2;
    for(int i=0;i<n1;i++)
    {
        cin>>a;
        head1=insert_end(head1,a);
    }
    for(int i=0;i<n2;i++)
    {
        cin>>a;
        head2=insert_end(head2,a);
    }
    printLL(head1);
    cout<<endl;
    printLL(head2);
    cout<<endl;
    head1=Merge2SortedLL(head1,head2);
    printLL(head1);
}
