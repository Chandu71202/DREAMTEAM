#include <vector>
#include <iostream>
#include <cstring>
using namespace std;
int max(int a, int b)
{
    return (a > b) ? a : b;
}   
int knapSack(int W, int wt[], int val[], int n)
{
    int dp[W + 1];
    memset(dp, 0, sizeof(dp));
 
    for (int i = 1; i < n + 1; i++) {
        for (int w = W; w >= 0; w--) {
 
            if (wt[i - 1] <= w)
                dp[w] = max(dp[w],dp[w - wt[i - 1]] + val[i - 1]);
        }
    }
    return dp[W];
}
int main()
{
    int n,W;
    cin>>n>>W;
    int wt[n];
    int val[n];
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    
    cout << knapSack(W, wt, val, n) <<endl;
    
    return 0;
}

// INPUT:5 
// 5 100
// 10 20 30 40 100
// 10 20 30 40 100
// OUTPUT:
// 100

// INPUT:
// 105
// 10 10 40 50 90
// OUTPUT:
// 10 20 20 50 150
