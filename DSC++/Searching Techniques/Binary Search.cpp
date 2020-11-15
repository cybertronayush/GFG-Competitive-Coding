#include <iostream>
using namespace std;
int binarySearch(int array[], int n,int x) {
  
	// Repeat until the pointers low and high meet each other
	int low=0;
	int high=n;
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}
int main() {
//size of array
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
}

//Key which we have tos Search!
int x;
cin>>x;

cout<<binarySearch(arr,n,x)<<endl;
return 0;
  
}