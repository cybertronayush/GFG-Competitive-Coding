#include<iostream>
using namespace std;
int main(){
	int n;
  cin>>n;
  int i = 1;
//for printing n ROWs
while(i <= n){
//SPACES
  int space = 0;
  while(space <= n-i){
    cout<<" ";
    space++;
  }//increase values:
  int value = i;
  int count = 1;
  while(count <= i){
    cout<<value;
    value++;
    count++;
  }//decrease value
  value = 2*i-2; 
  int dec = 1;
  while(dec <= i-1){
    cout<<value;
    value--;
    dec++;
  }
  cout<<endl;
  i++;  
}
return 0;
}
