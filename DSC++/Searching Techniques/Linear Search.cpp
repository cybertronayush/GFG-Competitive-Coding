#include <iostream>
using namespace std;
//Linear Search Function

int LinearSearch(int arr[], int n, int k){
  for(int j = 0; j < n; j++){
    if(arr[j] == k){ 
        return j;
    }
}
return -1;
}

//Main fucntion

int main() {
//size of array
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
}

//Key which we have tos Search!
int k;
cin>>k;

cout<<LinearSearch(arr,n,k)<<endl;
return 0;
  
}