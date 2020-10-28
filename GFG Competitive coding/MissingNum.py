#MissingNUmber
t = int(input())
n = int(input())
y = n*(n+1)/2
x = list(map(int,input().split()))
sum = 0
for i in x:
    sum = sum + i
if sum < y:
    print(int(y - sum))
