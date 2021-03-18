#include<bits/stdc++.h>
using namespace std;
//we will get sorted array after n-1th iteration 
//check will run i-1times
int main(){

int n;
cin>>n;
int arr[n];
for(int i = 0; i<n;i++){
    cin>>arr[i];
}
int c = 1;
while(c < n){
    for(int i =0; i < n-c; i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    c+=1;
}

	for(int i =0; i<n;i++){
		cout<<arr[i]<<" ";
		}
		cout<<endl;	
	}
	