class Solution {
public:
long long int nthFibonacci(long long int n){
#define val 1000000007
int dp[2001];
dp[0]=1;
dp[1]=1;
for(long long int i=2;i<2000;i++)
{
dp[i]=((dp[i-1]%val)+(dp[i-2]%val))%val ;
}
return dp[n-1];
}
};