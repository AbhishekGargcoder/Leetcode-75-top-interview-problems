class Solution {
public:
  int n;
    vector<vector<int>>dp;
  int f(int idx,int buy,vector<int>&arr){
   if(idx>=n)
       return 0;
      int profit=0;
 if(dp[idx][buy]!=-1)return dp[idx][buy];
  if(buy)
    profit=max(arr[idx]+f(idx+2,0,arr),0+f(idx+1,1,arr));
      
      
  else
  profit=max(-arr[idx]+f(idx+1,1,arr),0+f(idx+1,0,arr));
      
   return dp[idx][buy]=profit;
      
}
    int maxProfit(vector<int>&arr) {
   n= arr.size() ;
    dp=vector<vector<int>>(n+1,vector<int>(2,-1));
     return f(0,0,arr);
    }
};