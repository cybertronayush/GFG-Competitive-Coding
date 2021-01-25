#include<iostream>
using namespace std;
int main(){

	int n;cin>>n;
  int i = 1;
//for printing n ROWS
  while( i <= n){
// ____1 as for n = 5
//first have to print 4 space (5-1) spaces
//for printing Spaces = (n-1)  
  for(int space = 1; space <= n-i; space++){
      cout<<" ";
  }
  //for printing value
  //i = 4th _1234567

  int value = 1;
  for(int b = 1; b <= 2*i-1; b++){
    cout<<value;
    value++;
  }
cout<<endl;
i++;
  }
return 0;

}
