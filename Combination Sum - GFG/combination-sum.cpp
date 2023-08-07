//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
 bool isEqual(vector<int>&a, vector<int>&b) {
     if(a.size()!= b. size()) return true ;
     for(int i=0;i<a.size();i++)
       if(a[i]!=b[i]) return true;
     return false;
 }
  vector<vector<int>>res;
  vector<int>prev;
  void f(int i, int target, vector<int>&arr,vector<int>&sum){
    //  if(target<0) return;
      if(i==arr.size()){
      if(target == 0){
    
          res.push_back(sum);
      
      }
      return;
      }
      if(arr[i]<=target) {
          sum.push_back(arr[i]);
          f(i,target-arr[i], arr, sum);
          sum.pop_back();
      }
      f(i+1,target,arr, sum);
     
  }
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &arr, int target) {
       vector<int>sum;
       sort(arr.begin(), arr.end() );
       
       set<int>s;
       vector<int>a;
       for(auto i : arr)
        s.insert(i);
       for(auto i: s)
        a.push_back(i);//settings/content/flash
       f(0,target,a,sum);
       if(res.size() ==0) {};
       return res;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends