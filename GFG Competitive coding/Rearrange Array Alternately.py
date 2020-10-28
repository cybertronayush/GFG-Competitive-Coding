#Chocolate Station
for x in range(int(input())):
    n=int(input())
    l = list(input().split())
    i,j=0,len(l)-1
    while(i<=j):
        if(i==j):
            print(l[i])
            break
        print(l[j],end=' ')
        print(l[i],end=' ')
        i+=1
        j-=1
        if(j+1==i):
            print() 
