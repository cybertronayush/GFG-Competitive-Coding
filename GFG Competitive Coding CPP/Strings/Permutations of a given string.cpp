#include <bits/stdc++.h> 
using namespace std; 
void permutation(string str,vector<string>& result,int l,int r){
    
    if(l==r) {
        //cout<<"pushed";
        
        result.push_back(str);
        //cout<<"the size is "<<result.size();
    }
    else{
        int i;
        for(i=l;i<=r;i++){
            swap(str[l],str[i]);
            permutation(str,result,l+1,r);
        }
    }
    
}

int main() {
   	int t;
	cin>>t;
	string str;
	while(t--){
	    cin>>str;
	    vector<string> result;
	    permutation(str,result,0,str.length()-1);
	    
	    sort(result.begin(),result.end());
	    for(auto it=result.begin();it!=result.end();++it){
	        cout<<*it<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}