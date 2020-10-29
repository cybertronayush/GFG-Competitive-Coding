#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--){
	   
	   int s,k;
	   cin>>s;
	   int arr[s];
	   for(int i=0;i<s;i++){
	       scanf("%d",&arr[i]);
	   }
	   scanf("%d",&k);
	   sort(arr,arr+s);
	   printf("%d",arr[k-1]);
	   cout<<endl;
       } 
	return 0;
}

