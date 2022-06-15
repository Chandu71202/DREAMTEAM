#include<iostream>
using namespace std;
int isPrime(int n);
int main()
{
    int n;
    cin>>n;
    cout<<isPrime(n);
}
int isPrime(int n)
{
    if(n==2 || n==3)
    return 1;
    if(n%2==0 || n%3==0)
    return 0;

     for (int i=5; i*i<=n;i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return 0;
    return 1;
}

/* Input:
5
Output:
1

if num is prime returns 1 else 0 */