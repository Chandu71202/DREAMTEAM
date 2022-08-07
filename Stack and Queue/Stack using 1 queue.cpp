#include <iostream>
#include<queue>
using namespace std;

class Stack
{
    queue<int> q1;
public:
    void push(int x)
    {
        int s=q1.size();
        q1.push(x);

        for(int i=0;i<s;i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
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
