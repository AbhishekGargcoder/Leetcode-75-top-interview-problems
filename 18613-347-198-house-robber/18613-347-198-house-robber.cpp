class Solution {
public:
    vector<int>dp;
    int fun(vector<int>&arr,int n){
      if(n==0) return arr[n];
      if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
      int take = arr[n] + fun(arr,n-2);
      int notTake = fun(arr, n-1);
      return dp[n]= max(take, notTake);
        
 }
    int rob(vector<int>&arr) {
        int n = arr.size();
       dp = vector<int>(n, -1);
       return fun(arr, n-1);
    }
};