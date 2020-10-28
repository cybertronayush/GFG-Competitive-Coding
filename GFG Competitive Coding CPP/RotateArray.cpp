#include <iostream>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--)
	{
	  unsigned n,d;
	  cin>>n>>d;
	  int a[n];
	  for(unsigned int i=0;i<(n);i++)
	  {
	      cin>>a[(i+n-d)%n];
	  } 
	
	  for(unsigned int i=0;i<(n);i++)
	  {
	      
	      cout<<a[i]<<" ";
	  }
	
	  cout<<endl;  
	}
	return 0;
}