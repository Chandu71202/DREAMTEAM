#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
       for(int j = 0; j < n; j++)
       {
           cin >> a[i][j];
       }
    }
    int left=0;
    int right=n-1;
    int top=0;
    int down=n-1;
    int dir=0;
    while(left<=right && top<=down)
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
            {
                cout<<a[top][i]<<" ";
            }
                top++;
        }
        
        if(dir==1)
        {
            for(int i=top;i<=down;i++)
            {
                cout<<a[i][right]<<" ";
            }
                right--;

        }

        if(dir==2)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<a[down][i]<<" ";
            }
                down--;

        }

        if(dir==3)
        {
            for(int i=down;i>=top;i--)
            {
                cout<<a[i][left]<<" ";
            }
                left++;

        }
        dir=(dir+1)%4;
    }
}