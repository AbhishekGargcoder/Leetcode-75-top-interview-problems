//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int mod =(int) 1e9+7;
  vector<vector<int>>dp;
   int subsets(vector<int>&arr,int i,int target){
       if(i==0){
           if(arr[0]==0&&target==0) return 2;
           if(arr[0]==target or target ==0) return 1;
           return 0;
       }
       if(dp[i][target]!=-1) return dp[i][target];
       int take =0;
       int notTake = subsets(arr,i-1, target);
      if(arr[i]<=target) take = subsets(arr,i-1,target-arr[i]);
       return dp[i][target]=(take + notTake)%mod;
   }
    int countPartitions(int n, int d, vector<int>& arr) {
       int totalSum=0;
   for(auto e: arr)
        totalSum += e;
       int s2 = (totalSum - d)/2;
       if(totalSum-d<0 or ((totalSum-d)&1)==1) return 0;
      dp = vector<vector<int>>(n,vector<int>((totalSum-d)/2+1,-1));
            return subsets(arr,n-1,(totalSum-d)/2);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends