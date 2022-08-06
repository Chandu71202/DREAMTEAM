def partition(l,low,high):
    pivot=l[high]
    i=low-1
    for j in range(low,high):
        print(l[j])
        if l[j]<=pivot:
            i=i+1 
            l[i],l[j]=l[j],l[i]
    l[i+1],l[high]=l[high],l[i+1]
    return i+1
    
def quickSort(l,low,high):
    if low<high:
        pi=partition(l,low,high)
        quickSort(l,low,pi-1)
        quickSort(l,pi+1,high)

l=[23,42,41,4,234,2,4323,42]
quickSort(l,0,len(l)-1)
print(l)
