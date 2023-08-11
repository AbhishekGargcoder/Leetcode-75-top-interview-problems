//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:   
  int f(int idx,vector<int>&arr,int target){
     if(idx==-1){
        if(target==0) return 1;
        return 0;
     }
      
     int pos =0, neg=0;
//   if(arr[idx]<=target)
     pos = f(idx-1,arr,target-arr[idx]);
     neg = f(idx-1,arr,target-(-arr[idx]));
     return pos + neg;
        
 }
    int findTargetSumWays(vector<int>&arr ,int target) {
        return f(arr.size()-1,arr, target);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends