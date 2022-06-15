// it is an array of 0's,1's and 2's
// no sorting, no frequency, T.C=O(n), S.C=O(1)
//Segregate means to group the elements together
#include<iostream>
using namespace std;
void swap(int* a,int* b);
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        switch (a[mid])
        {
        case 0:
            swap(&a[low],&a[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(&a[high],&a[mid]);
            high--;
            break;
        default:
            break;
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

}
void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

/* Input:
7
2 0 0 1 2 1 0

Output:
0 0 0 1 1 2 2 */