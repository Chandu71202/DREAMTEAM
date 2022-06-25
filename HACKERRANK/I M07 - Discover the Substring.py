# strstr is a function that returns 1 if one string is present as substring in another and 0 otherwise. You are to write a program to print the number of times one string is present in the other as a substring.

# Input Format

# Two lines of input consisting of two strings.

# Constraints

# 1 <= length of strings <= 100

# Output Format

# Output one number, the number of times any one string appears in the other.

# Sample Input 0

# banana
# ana
# Sample Output 0

# 2
# Explanation 0

# b(ana)na and ban(ana) so answer is 2

# Sample Input 1

# a
# adamant
# Sample Output 1

# 3
# Explanation 1

# (a)damant, ad(a)mant and adam(a)nt. So answer is 3.


s1=input()
s2=input()
c=0
if(len(s1)>len(s2)):
    f=s2[0]
    for i in range(len(s1)):
        if(s1[i]==f):
            if(s2==s1[i:i+len(s2)]):
                c=c+1;
else:
    f=s1[0]
    for i in range(len(s2)):
        if(s2[i]==f):
            if(s1==s2[i:i+len(s1)]):
                c=c+1;
print(c)
             
