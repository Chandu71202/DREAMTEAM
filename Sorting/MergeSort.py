def merge(la,lb):
    (C,m,n)=([],len(la),len(lb))
    (i,j)=(0,0)
    while(i+j<m+n):
        if i==m:
            C.append(lb[j])
            j=j+1 
        elif j==n:
            C.append(la[i])
            i=i+1 
        elif la[i]<lb[j]:
            C.append(la[i])
            i=i+1 
        elif la[i]>lb[j]:
            C.append(lb[j])
            j=j+1 
        elif la[i]==lb[j]:
            C.append(la[i])
            C.append(lb[j])
            i=i+1 
            j=j+1 
    return C
def mergeSort(l,low,high):
    if high-low<=1:
        return l[low:high]
    if high-low>1:
        mid = (low+high)//2 
        L=mergeSort(l,low,mid)
        R=mergeSort(l,mid,high)
        return merge(L,R)
      
l=[10,30,14,213,14,13213,13]
print(mergeSort(l,0,len(l)-1))
