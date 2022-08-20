N,K=map(int,input().split())
price=list(map(int,input().split()))
vol=list(map(int,input().split()))
maxvol=0
volu=0
maxvol=max(vol)
for i in range(0,N):
    if (maxvol==vol[i] and price[i]<=K):
        K=K-price[i]
        volu=maxvol
for i in range(0,N):
    for j in range(i+1,N+1):
        if (price[i]<=K and price[i]==price[j]):
            if (vol[i]>vol[j]):
                volu=volu+vol[i]
                K=K-price[i]
            else:
                volu=volu+vol[j]
                K=K-price[j]
        elif (price[i]<=K and price[i]!=price[j]):
            K=K-price[i]
            volu=volu+vol[i]
print(volu)

# INPUT:
# 5 100
# 10 20 30 40 100
# 10 20 30 40 100
# OUTPUT:
# 100
