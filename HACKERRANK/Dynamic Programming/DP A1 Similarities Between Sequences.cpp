// You are given two sequences of integers A(1,2...N) and B(1,2...M).

// A new function F(A, B) has been devised to calculate the similarity between two integer sequences. Your task is to calculate F(A, B).

// F(A, B) is the maximum possible number k such that there exists a certain i and a certain j with the following properties -

// 1 ≤ i ≤ i + k - 1 ≤ N
// 1 ≤ j ≤ j + k - 1 ≤ M
// For every p = {0,1,2..k-1}, Ai+p = Bj+p
// Input

// First line contains the value of integer N.
// Second line contains the elements of sequence. A.
// Third line contains the value of integer M.
// Fourth line contains the elements of the sequence B.

// Output

// Print one number, the value of F(A, B)

// Notes

// N and M do not exceed 1000.
// The elements in the sequence fit in a 32-bit integer.

// Sample Input 0

// 5
// 1 2 3 4 5
// 6
// 3 4 5 6 7 8
// Sample Output 0

// 3


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  
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
    long long int maxi = 0;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            dp[i][j] = 0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i]==b[j]){
                dp[i][j]=dp[i-1][j-1]+1;
                maxi = max(maxi,dp[i][j]);
            }
         }
    }
    
    cout<<maxi;
    return 0;
}
