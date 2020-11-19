

//0 - 1 Knapsack Problem
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

int dp[1001][1001];
int answer(int w, int wt[], int val[], int n){
    //Base Conditions 
    if(n == 0 || w == 0)
        return 0;

    //Momoizaton Technique
    if(dp[n-1][w] != -1)
        return dp[n-1][w];

    //Choice Chart Conditions 
    if(wt[n-1] <= w){
        return dp[n-1][w] = max(val[n-1] + answer(w-wt[n-1], wt, val, n-1), answer(w, wt, val, n-1));
    }
       
    return dp[n-1][w] = answer(w, wt, val, n-1);
    
}

int knapSack(int W, int wt[], int val[], int n) 
{ 
    // Your code here
    memset(dp, -1, sizeof(dp));
    return answer(W, wt, val, n);
}



// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        
        //calling method knapSack()
        cout<<knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends