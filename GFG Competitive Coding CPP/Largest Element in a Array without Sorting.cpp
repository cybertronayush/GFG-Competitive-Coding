#include <iostream>
using namespace std;
int largest = 0;

int main() {
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    
    for(int j = 0;j<n;j++){
        if(arr[j] > largest){
            largest = arr[j];
        }
    }
    cout<<largest<<endl;
	return 0;
}