#code
n=int(input())
for i in range(n):
    akar=int(input())
    arr=list(map(int,input().split()))
    leftsum=0
    su=sum(arr)
    e=0
    for j in range(akar):
        if(leftsum==su-arr[j]-leftsum):
            e=1
            print(j+1)
        else:
            leftsum+=arr[j]
    if( e==0 ):
        print(-1)
        
