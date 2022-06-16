#include<iostream>
using namespace std;
// user defined dataType : structure struct
// * : dereference operator a.r.a value at
struct Node
{
	int data;
    // <dataType>* name;
  	Node* next;
};

Node* HEAD = NULL; // Store the address of the first Node
Node* LAST = NULL; // Store the address of the last Node 

void append(int value) // data is inserted to the end of the linkedList
{
    Node* newNode = new  Node();
    if(HEAD==NULL) // LinkedList is empty
    {
        HEAD = newNode; // newly created node is the first node 
        LAST = newNode; // as well as the last Node
        newNode->data = value; // update the value
    }
    else
    {
        LAST->next = newNode; // last node to store the address of the newly created node
        LAST = newNode; // update the newly created node as the last node
        newNode->data = value; // update the value
    }
}

void printList()
{
    Node *temp = HEAD; // temp stores the address of the first node
    while(temp!=NULL) // stop when reaching the node who has the address stored as NULL
    {
        cout<<temp->data<<" ";
        temp = temp->next; // move temp to the next node
    }
    cout<<endl;
}

void printReverse(Node *visitingNode)
{
    if(visitingNode==NULL) // terminating condition
    {
        return; 
    }
    // cout<<"Visited "<<visitingNode->data<<endl;
    printReverse(visitingNode->next); // control resume after the function call statement
    // cout<<"Backtracked to "<<visitingNode->data<<endl;
    cout<<visitingNode->data<<" "; // REV
}

void insertAt(int value , int position)
{
    //#1 . create a Node 
    Node *newNode = new Node();
    newNode->data = value;

    // reach the node at (position-1)
    int count=1;
    Node *prevNode = HEAD;
    while(count<position-1)
    {
        prevNode = prevNode->next; // move into the next node
        if(prevNode==NULL) // reached the end of the LinkedList
        {
            cout<<"Invalid Position, try again"<<endl;
            return;
        }
        count++;
    }
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void deleteFromBegining()
{
    HEAD = HEAD->next;
}

void deleteValue(int value)
{
    Node *prevNode = NULL;
    Node *currNode = HEAD;
    if(currNode->data==value)// first node to be deleted
    {
        // special case 
        deleteFromBegining();
        return;
    }
    while(currNode->data!=value)
    {
        prevNode = currNode;
        currNode= currNode->next;
        if(currNode==NULL)
        {
          cout<<"Value not present"<<endl;
          return;
        }
    }
    prevNode->next = currNode->next; // prev node to store the address of the next node of the currNode
}


int main()
{
	append(10);
  	append(20);
  	append(30);
  	append(40);
    // printList();
    // printReverse(HEAD);
    insertAt(90,5);
    //printList();
    //deleteFromBegining();
    //printList();
    //deleteValue(10);
    printList();
}

// 10 20 30 40 90