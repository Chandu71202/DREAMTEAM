// You are given two integer sequences A and B,

// Your task is to make the sequence A exactly identical to B.

// You can perform three operations on the sequence A :

// Insert an integer at some position
// Remove an integer from some position
// Modify an integer i.e. give a new value to an integer at some position
// Every operation takes 1 unit of cost.

// Your task is, given A and B, find the minimum cost to convert A to B.

// Input

// First line contains the number of elements in A
// Second line contains the elements of the array A
// Third line contains the number of elements in B
// Fourth line contains the elements of the array B

// Output

// Print the minimum cost of converting A to B

// Notes

// Size of the sequences will not exceed 1000
// All elements of the sequences fit in a 32-bit integer.

// Sample Input 0

// 6
// 1 2 3 4 5 6
// 8
// 1 5 7 2 8 4 5 6
// Sample Output 0

// 3


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
  
    long long int n;
    cin>>n;
    long long int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    
    long long int m;
    cin>>m;
    long long int b[m+1];
    for(int i=1;i<=m;i++)
        cin>>b[i];
    long long int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0)
                dp[i][j]=j;
            else if(j==0)
                dp[i][j]=i;
            else
            {
            if(a[i]==b[j])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
            }
           
         }
    }
    cout<<dp[n][m];
}
