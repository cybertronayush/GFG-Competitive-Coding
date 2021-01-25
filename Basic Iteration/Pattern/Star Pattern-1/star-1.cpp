#include<iostream>
using namespace std;
int main(){

	int n;cin>>n;
  int i = 1;
  //for printing n rows
	while( i <= n){
  //For printing Column & there values
		for(int j = 1; j <= i; j++){
			cout<<"*";
		}
  //for space
	cout<<'\n';
  i++;
	}
return 0;

}
