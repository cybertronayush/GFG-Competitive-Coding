#include <iostream>
#include<vector>
using namespace std;

vector<int> a[100000];
int visited[1000000];
//K is Starting point of DFS
void dfs(int k){
    if(!visited[k]){
        visited[k]=1;
        for (int i=0 ; i<a[k].size();i++){
            if(!visited[a[k][i]]){
                dfs(a[k][i]);
            }
        }   
    }
}

int main() {
    int n=5;
    while(n--){
        int p,q;
        //directed graph
    cin>>p>>q;
    //p -> q
    a[p].push_back(q);
    }
    dfs(0);
    for(int i=0;i<8;i++) cout<<i<<":"<<visited[i]<<endl;
    return 0;
}