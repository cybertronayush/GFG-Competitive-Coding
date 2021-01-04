//Modus operandi for This Question is I->Smallest Element First so Next will 
//be automatically bigger same In D-> put greatest First next will be Smaller itself. 
vector<int> Solution::findPerm(const string s, int n) {
      vector<int> ans(n);
      int start = 1, e = n;
      
      for(int i=0;i<s.size();i++){
          if(s[i]=='D'){
  //We could also have finded out The largest Element using in Max STl function but 
        //Array is already sorted so we dont need to do so.
              ans[i] = e;
              e--;
          }else{
              ans[i] = start;
              start++;
          }
      }
//Here both start end elements are at same Pos.
//Can write anything here s or e
      ans[n-1] = start; /// e
      return ans;
}
//https://www.interviewbit.com/problems/find-permutation/#