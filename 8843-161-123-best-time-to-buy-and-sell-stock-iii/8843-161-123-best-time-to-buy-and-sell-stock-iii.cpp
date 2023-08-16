class Solution {
public:
    int n;
int f(int idx,int buy,int cap,vector<int>&arr,vector<vector<vector<int>>>&dp){
    if(idx==n or cap==0) return 0;
    int profit=0;/*vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)))*/
 if(dp[idx][buy][cap]!=-1)
    return dp[idx][buy][cap];
    if(buy)
     profit = max(arr[idx]+ f(idx+1,0,cap-1,arr,dp), 
      0+ f(idx+1,1, cap,arr, dp)) ;
        
    
    else
      profit= max(-arr[idx]+ f(idx+1,1,cap, arr, dp), 
    0+ f(idx+1,0,cap,arr, dp));
   return dp[idx][buy][cap]=   profit;
}/*vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)))*/
  int maxProfit(vector<int>&arr) {
     n =arr.size();
     vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
     return f(0,0,2,arr, dp);
    }
};