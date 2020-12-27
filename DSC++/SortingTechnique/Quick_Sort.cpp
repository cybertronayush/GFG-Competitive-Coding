#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int i = s;
    int pivot = arr[e];
    for(int j = s; j <= e-1; j++){
        if(arr[j] < pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[e]);
    return i;
}

void quickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){

   int arr[] = {2,1,3,4,5,7,-2};
   quickSort(arr,0,6);
   for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
   }

   return 0;
}
