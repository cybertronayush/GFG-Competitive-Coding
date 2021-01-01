https://ideone.com/SCiVpm// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends


class Solution{
public:
    long long int factorial(int N){
        //code here
        //Base Conditions
        if(N <= -1) return -1;
        if(N == 0) return 1;
    
        long long int ans = factorial(N-1);
        return N*ans;
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends