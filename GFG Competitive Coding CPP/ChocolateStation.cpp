#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int k=0;
	    cin>>k;
	    int max=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>max)
	            max=a[i];
	    }
	    cout<<max*k<<endl;
	}
	return 0;
}