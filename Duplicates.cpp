//Strictly only one duplicate element

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int t=a[0];
    int h=a[0];
    do{
        t=a[t];
        h=a[a[h]];
    }while(t!=h);
    t=a[0];
    while(t!=h){
        t=a[t];
        h=a[h];
    }
    cout<<"Dupliacate number is: "<<t;
}

/* Input : 
5
1 4 5 3 3

Output:
3 */