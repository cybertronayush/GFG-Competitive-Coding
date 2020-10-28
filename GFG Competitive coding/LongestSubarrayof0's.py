#Largest subarray of 0's and 1's
def maxLen(arr):
    bc={}
    s=0
    e=0
    for i in range(len(arr)):
        if arr[i]==0:
            arr[i]=-1

    for i in range(len(arr)):
        s+=arr[i]
        if s==0:
           e=max(e,i+1)
        if s in bc:
           e=max(e,i-bc[s])
        else:
            bc[s]=i
    return e
