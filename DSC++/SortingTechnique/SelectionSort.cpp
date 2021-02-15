#include<iostream>
using namespace std;
//0 1 2 3 = index 
//4 3 2 1 = value
void selectionSort(int a[],int n){
	//As for n-1th element there no element remains to make comparision

     for(int i=0;i<=n-2;i++){
        int smallest = i;
        for(int j = i+1;j<=n-1;j++){

            if(a[j]<a[smallest]){
            	//index of the smallest value
                smallest = j;
            }
        }

        swap(a[i],a[smallest]);
     }
}

int main(){

   int n;
   cin>>n;

   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }

   selectionSort(a,n);

   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }

    return 0;
}
//WRONG FUNCTION
 /*for(int i=0;i<=n-2;i++){

          int smallest = INT_MAX;
          for(int j = i+1;j<=n-1;j++){
            if(a[j]<smallest){
                smallest = a[j];
            }
          }

          if(a[i] > smallest){
            swap(a[i] , smallest);
          }

     }*/