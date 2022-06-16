def sortL(arr):
    length = len(arr)
    j = 0
    while j < length - 1:
        if (arr[j] > arr[j + 1]):        
            temp = arr[j]
            arr[j] = arr[j + 1]
            arr[j + 1] = temp
            j = -1
        j += 1
    print(*arr)

n=input()
l=[]
for a in range(len(n)):
    l.append(n[a])
for i in range(len(l)-1,-1,-1):
    if(l[i]>l[i-1]):
        break
if(i==0):
    print("Not Possible")
else:
    x=l[i]
    small=l[i-1]
    ind=0
    if i==len(n)-1:
        l[i],l[i-1]=l[i-1],l[i]
        print(*l)
    else:
        for j in range(len(n)-i,len(n)-1):
            if(l[j]>l[j+1]):
                min=l[j+1]
                ind=j+1
        l[i-1],l[ind]=l[ind],l[i-1]
        print(*l[0:i],end=" ")
        sortL(l[i::])

"""    Input     Output
   1234       1243
   4321       Not Possible
   534976     536479
   115        151 """