#include<iostream>
using namespace std;

//Prime Seive 

void PrimeSieve(int n){
    int p[n+1]={0};
    for(int i = 2; i<=n;i++){
        if(p[i] == 0){
            for(int j = i*i; j<=n; j+=i){
                p[j] = 1;
            }
        }
    }

    for(int i = 2; i<=n; ++i){
        if(p[i] == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

//Main Function
int main(){
    
    int n;
    scanf("%d",&n);

    PrimeSieve(n);

    return 0 ;
}