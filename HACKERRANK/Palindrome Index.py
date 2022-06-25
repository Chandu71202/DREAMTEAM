# Given a string of lowercase letters in the range ascii[a-z], determine the index of a character that can be removed to make the string a palindrome. There may be more than one solution, but any will do. If the word is already a palindrome or there is no solution, return -1. Otherwise, return the index of a character to remove.

# Example

# Either remove 'b' at index  or 'c' at index .

# Function Description

# Complete the palindromeIndex function in the editor below.

# palindromeIndex has the following parameter(s):

# string s: a string to analyze
# Returns

# int: the index of the character to remove or 
# Input Format

# The first line contains an integer , the number of queries.
# Each of the next  lines contains a query string .

# Constraints

# All characters are in the range ascii[a-z].
# Sample Input

# STDIN   Function
# -----   --------
# 3       q = 3
# aaab    s = 'aaab' (first query)
# baa     s = 'baa'  (second query)
# aaa     s = 'aaa'  (third query)
# Sample Output

# 3
# 0
# -1
# Explanation

# Query 1: "aaab"
# Removing 'b' at index  results in a palindrome, so return .

# Query 2: "baa"
# Removing 'b' at index  results in a palindrome, so return .

# Query 3: "aaa"
# This string is already a palindrome, so return . Removing any one of the characters would result in a palindrome, but this test comes first.

# Note: The custom checker logic for this challenge is available here.


#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'palindromeIndex' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING s as parameter.
#

def palindromeIndex(s):
    # Write your code here
    l = len(s)
    i = 0
    j = l-1
    while i<l:
        if s[i]!=s[j]:
            break
        i+=1
        j-=1
    if i>j: return -1
    a = i+1
    b = j
    while a<j and b>i+1:
        if s[a]!=s[b]:
            return j
        a+=1
        b-=1
    return i

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        s = input()

        result = palindromeIndex(s)

        fptr.write(str(result) + '\n')

    fptr.close()
