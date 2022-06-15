//Leader element means the right side of a[i] must be less than a[i]

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<arr[n-1]<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>arr[i+1])
        cout<<arr[i]<<" ";
    }
}

/* Input:
5
1 2 3 4 5
Output:
5

Input:
5
5 4 3 2 1
Output :
1 2 3 4 5

Input:
6
23 16 19 7 9 4
Output:
4 9 19 23 */