t = int(input())
n = int(input())
x = list(map(int,input().split()))
for i in range(0,n):
    for j in range(i+1,n):
        if x[i] <= x[j]:
            break
    if j == n-1:
            print(x[i],end=" ")
