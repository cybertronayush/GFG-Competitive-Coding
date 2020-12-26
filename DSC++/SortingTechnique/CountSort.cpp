//Count-Sort
#include <iostream>
using namespace std;

void Count_Sort(int arr[], int n){
//Finding The Max Element In Given ARRAY
    int k = arr[0];
    for(int i = 0; i < n; i++){
        k=max(k,arr[i]);
    }

//Count Per Number
    
    int count[10] = {0};
    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }
// cumulative SUM
    
    for(int i = 1; i <=k; i++){
        count[i]+=count[i-1];
    }    
//Now for Possition
    
    int out[n];
    for(int i = n-1; i >=0; i--){
        out[--count[arr[i]]] = arr[i];
    }
    
    for(int i = 0; i<n; i++){
        arr[i]=out[i];
    }
}

int main() {
    
    
    
    int arr[] = {1,3,3,3,4,1,6,4,5};
    Count_Sort(arr,9);
     for(int i = 0; i<9; i++){
        cout<<arr[i]<<' ';
     }
    return 0;
}