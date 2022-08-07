/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

class Stack
{
    queue<int> q1,q2;
public:
    void push(int x)
    {
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> q=q1;
        q1=q2;
        q2=q;
    }
    
    void pop()
    {
        if (q1.empty())
			return;
        q1.pop();
    }
    int top()
    {
        if (q1.empty())
			return -1;
		return q1.front();
    }
    
    int size()
    {
        return q1.size();
    }
    
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    
    return 0;
}
