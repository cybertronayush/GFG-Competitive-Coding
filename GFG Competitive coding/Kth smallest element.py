#code
T=int(input())
while(T): 
    n=int(input())
    arr=list(map(int,input().split()))
    K=int(input())
    arr.sort()
    print(arr[K-1])
    T-=1