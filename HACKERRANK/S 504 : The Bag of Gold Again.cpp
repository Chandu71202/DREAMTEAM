// You are given an empty bag that is supposed to be filled with gold, and it can carry at max W kgs of gold in it.

// You are given N samples of gold, with the ith of them weighing Wi and having value Vi.

// Your task is to fill the bag with atmost W kgs of gold such that the total value of the gold inside the bag is maximum.

// Unlike last time, this time whenever you choose to pick a sample of gold, you have to take it completely, i.e. you cannot break down samples. You either pick the entire sample of gold, or you dont pick the sample at all.

// INPUT
// First line contains two integers, N and W.
// Second onwards, there are N lines with each of them containing two integers, first one being the weight of the sample and the second one being the value of the sample

// OUTPUT
// Print one number, the maximum attainable value when the bag is filled with atmost W kgs of gold.

// CONSTRAINTS
// 1 ≤ N ≤ 103
// 1 ≤ W ≤ 103
// 1 ≤ weights, values ≤ 103

// Sample Input 0

// 1
// 3 50
// 10 60
// 20 100
// 30 120
// Sample Output 0

// 220

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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
    int t;
    cin>>t;
    while(t)
    {
        int n,W;
        cin>>n>>W;
        int wt[n];
        int val[n];
        for(int i=0;i<n;i++)
        {
            cin>>wt[i];
            cin>>val[i];
        }
        cout << knapSack(W, wt, val, n) <<endl;
        
        t--;
    }
    
    return 0;
}
