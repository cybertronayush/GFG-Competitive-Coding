//edge list is very bad way to implement graph 0(n^2)
//adjecency list O(n)
//adjecency Matrix O(1) But Space is O(n^2) V * V matrix 
//Implementation of DFS traversal(recursive)

#include<iostream>
#include<vector>
using namespace std;
// as there in graph there is no concept of Parent and Children 
//..So we need to decide and pass here starting vertex.

void print(vector<vector<int> > v, int sv, vector<bool> &visited){//sv = Starting vertex 
    cout<<sv<<endl;
    visited[sv] = true;
    int n = v.size();
    for(int i=0;i<n;i++){
        if(v[sv][i] == 1 && visited[i]==false){
            print(v,i, visited);
        }
    }
}
//n=number of vetices 
//e=numbe of edges
int main(){
	int n,e;
	cin>>n>>e;
//Can use static matrix[][] or dynamic allocation way 
//and vector way also  
 vector<vector<int> > matrix(n,vector<int>(n,0));
//loop will be equals to number of edges for asking fv and sv (1,2) or (2,1)
   for(int i=1;i<=e;i++){
    int fv,sv;
    cin>>fv>>sv;
    matrix[fv][sv] = 1;//0 - false 1- true
    matrix[sv][fv] = 1;
   }
		//Graph Ready Code 
	}
	vector<bool> visited(n,false);

	//print function for matrix
	print(matrix,0);
	return 0;
}