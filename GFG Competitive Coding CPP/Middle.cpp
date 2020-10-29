#include<iostream>    
#include<algorithm>
using namespace std;

 int middle(int A,int B,int C){
    int temp[3] ={A,B,C};
    int n = sizeof(temp)/sizeof(temp[0]); 
    sort(temp, temp +n);
    return temp[1];
}

int main() {
    
    int a,b,c;
    cin>>a>>b>>c;
    
    int x = middle(a,b,c);
	return 0;
}