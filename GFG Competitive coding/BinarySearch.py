#Your task is to complete this function
#Function should return integer denoting the index
# indexing is done according to 0
# Left=0 and High=0
def bin_search(A, left, right, k):
    if left<=right:
        mid=(left+right)//2
        if arr[mid]==k:
            return mid
        elif arr[mid]>k:
            return bin_search(A,left,mid-1,k)
        else:
            return bin_search(A,mid+1,right,k)
    else:
        return -1



#{ 
#  Driver Code Starts
t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int, input().strip().split(' ')))
    x=int(input())
    print (bin_search(arr, 0, n-1, x))
# } Driver Code Ends