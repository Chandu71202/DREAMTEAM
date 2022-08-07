/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<stack>
using namespace std;
class Queue
{
    stack<int> s1,s2;
public:
    void enQueue(int x)
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int deQueue()
    {
        if(s1.empty())
        {
            cout<<"Queue is empty";
            exit(0);
        }
        int x=s1.top();
        s1.pop();
        return x;
    }
    int size()
    {
        return s1.size();
    }
};
int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(5);
    q.enQueue(4);
    
    cout<<q.deQueue()<<endl;
    cout<<q.size()<<endl;
    cout<<q.deQueue()<<endl;
    return 0;
}
