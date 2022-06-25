// On a field represented as a matrix of N rows and M columns there is a santa and two presents.

// Santa has one child pending to give a gift to and wants to get to a gift as fast as possible. He can walk in four directions: up, down, left or right. The indecisiveness of the Santa is that if the two gifts are equally close to him he won't be able to decide which one to choose and he will end up not gifting the child at all.

// You are given the cells of the gifts, but you don't know where Santa is. Compute the number of cells where Santa will become indecisive if he's there.

// INPUT

// The first line contains the two integers N and M.(2 ≤ N,M ≤ 200)
// The second line contains two integers representing the row and the column of the first gift.
// The third line contains two integers representing the row and the column of the second gift.
// The two gifts and Santa are guaranteed to be in three different cells.
// Santa always takes the shortest route to get to a gift.

// OUTPUT

// Output a single number representing the number of cells where Santa becomes indecisive if he's there. Constraints and notes

// Sample Input 0

// 5 5
// 2 4
// 5 3
// Sample Output 0

// 5
// Explanation 0

// Santa becomes indecisive if he is one of these cells:

// (3,1)
// (3,2)
// (3,3)
// (4,4)
// (4,5)

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n,m;
    cin>>n>>m;
    long long int a,b;
    a=1;
    b=1;
    long long int arr1[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr1[i][j] = 0;
        }
    }
    long long int a1,b1;
    cin>>a1>>b1;
    arr1[a1-1][b1-1]=-1;
    long long int arr2[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr2[i][j] = 0;
        }
    }
    long long int a2,b2;
    cin>>a2>>b2;
    arr2[a2-1][b2-1]=-1;
    
    
    for(int i=a1-2;i>=0;i--){
        arr1[i][b1-1]=a;
        a=a+1;
    }
    for(int i=a1;i<m;i++)
    {
        arr1[i][b1-1]=b;
        b=b+1;
    }
    a=1;
    b=1;
    for(int i=b1-2;i>=0;i--){
        arr1[a1-1][i]=a;
        a=a+1;
    }
    for(int i=b1;i<n;i++)
    {
        arr1[a1-1][i]=b;
        b=b+1;
    }
    
    for(int i=0;i<m;i++)
    {
        int c=arr1[i][b1-1];
        for(int j=0;j<)
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr1[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    
    a=1;
    b=1;
    
    for(int i=a2-2;i>=0;i--){
        arr2[i][b2-1]=a;
        a=a+1;
    }
    for(int i=a2;i<m;i++)
    {
        arr2[i][b2-1]=b;
        b=b+1;
    }
    a=1;
    b=1;
    for(int i=b2-2;i>=0;i--){
        arr2[a2-1][i]=a;
        a=a+1;
    }
    for(int i=b2;i<n;i++)
    {
        arr2[a2-1][i]=b;
        b=b+1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr2[i][j];
        }
        cout<<endl;
    }
    
    
    
    
    return 0;
}
//not yet over
