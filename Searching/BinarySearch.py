l=[1,2,3,4,5,6,7,8,9,10]

# ITERATIVE
# k=11
# low=0 
# c=0
# high=len(l)-1
# while(low<=high):
#     mid=(low+high)//2
#     if(l[mid]==k):
#         print("Element found")
#         c=1
#         break
#     elif(l[mid]>k):
#         high=mid-1
#     elif(l[mid]<k):
#         low=mid+1 
# if(c==0):
#     print("Element Not Found")


# RECURSIVE
def binarySearch(l,low,high,key):
    if(low<=high):
        mid=(low+high)//2
        if(l[mid]==key):
            return mid
        elif(l[mid]>key):
            return binarySearch(l,low,mid-1,key)
        elif(l[mid]<key):
            return binarySearch(l,mid+1,high,key)
    else:
        return -1
c=binarySearch(l,0,len(l)-1,3)
if(c!=-1):
    print("Element found at index pos",c)
else:
    print("Element not present in the array")
