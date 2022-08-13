// 1. Insert at Beginning
// 2. Insert at End
// 3. Insert at Any Pos
// 4. Delete at Any Pos 
// 5. Delete by getting value


#include<iostream>
using namespace std;

struct Node
{
    /* data */
    int data;
    struct Node* next;
};

struct Node* insert_beg(struct Node* head,int data)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    temp->next=head;
    head=temp;
    return head;
}

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

struct Node* insert_at_pos(struct Node* head,int data,int pos)
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
    for(int i=0;i<=pos-2;i++)
    {
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;

    return head;
}

struct Node* delete_at_pos(struct Node* head, int pos)
{
    struct Node* ptr = head;
    if(pos==1)
    {
        head=ptr->next;
        free(ptr);
        return head;
    }
    for(int i=0;i<pos-2;i++)
    ptr=ptr->next;
    // struct Node *ptr1=ptr->next;
    ptr->next=ptr->next->next;
    // free(ptr1);
    return head;
}

struct Node* delete_with_data(struct Node* head, int data)
{
    struct Node* ptr = head;
    if(data==head->data)
    {
        head=ptr->next;
        return head;
    }
    while(ptr->next->data!=data)
    {
        ptr=ptr->next;
    }
    ptr->next=ptr->next->next;
    return head;
}

Node* mergelist(Node *head1, Node *head2)
{
    Node *fh=NULL, *ft=NULL;
    while(head1!=NULL && head2!=NULL)
    {
    
        if(fh== NULL && ft==NULL)
        {
            if(head1->data>head2->data)
            {
                fh=head2;
                ft=head2;
                head2=head2->next;
            }
            else
            {
                fh=head1;
                ft=head1;
                head1=head1->next;
            }
        }
        if(head1 && head2) 
        {
            if(head1->data<head2->data)
            {
                ft->next=head1;
                ft=ft->next;
                head1=head1->next;
            }
            else
            {
                ft->next=head2;
                ft=ft->next;
                head2=head2->next;
            }
        }
    }

    if(head1!=NULL)
    {
        ft->next=head1;
    }
    if(head2!=NULL)
    {
        ft->next=head2;
    }
    return fh;
}


Node* sort_linked_list(Node* head)
{
    if(head == NULL || head ->next == NULL)
        return head;
    Node *temp = NULL;
    Node *slow = head;
    Node *fast = head;
    while(fast !=  NULL && fast -> next != NULL)
    {
        temp = slow;
        slow = slow->next;          
        fast = fast ->next ->next;  
    }   
    temp -> next = NULL;            
    Node* l1 = sort_linked_list(head);  //2   
    Node* l2 = sort_linked_list(slow);  //1 
    return mergelist(l1, l2);         
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
    head=insert_beg(head,1);
    head=insert_beg(head,-2);
    head=insert_beg(head,-3);
    head=insert_beg(head,4);
    head=insert_beg(head,-5);
    head=sort_linked_list(head);
    printLL(head);
    // head=insert_beg(head,90);

    // printLL(head);
    // // 90 80 70 60 50 40 
    // head= delete_at_pos(head,3);
    // printLL(head);
    // // 90 80 60 50 40
    // head= delete_with_data(head,70);
    // printLL(head);
    // // 90 80 60 50 40 
  

    // head=insert_end(head,40);
    // head=insert_end(head,50);
    // head=insert_end(head,60);
    // head=insert_end(head,70);
    // head=insert_end(head,80);
    // head=insert_end(head,90);

    // printLL(head);
    // // 40 50 60 70 80 90
    // head=insert_at_pos(head,40,0);
    // head=insert_at_pos(head,50,1);
    // head=insert_at_pos(head,60,2);
    // head=insert_at_pos(head,70,2);
    // printLL(head);



}
