# FIND THE SUM OF THE MAXIMUM SUBARRAY.

# Input Format

# First line contains N value denoting number of integers

# Next line contains N integers seperated by a space.

# Constraints

# 1<=N<1000000

# -10000<=a[i]<=10000

# Output Format

# A single integer denoting sum of the maximum sub array

# Sample Input 0

# 8
# -1 2 4 -3 5 2 -5 2
# Sample Output 0

# 10

n=int(input())
l=list(map(int,input().split()))
sum = 0
min = 0
res = l[0];
for i in range(n):
    sum += l[i];
    if(sum - min > res):
        res = sum - min;
    if(sum < min):
        min = sum;
print(res)
