class Solution {
public:
  vector<vector<int>>dp;
  int f(int idx,vector<int>&coins,int target){
   if(idx==0){
      if(target%coins[idx]==0)
         return target/coins[idx];
     return 1e9;
   }
          
   if(dp[idx][target]!=-1)
        return dp[idx][target];
  int notTake= f(idx-1,coins,target);
  int take = 1e9;
    if(coins[idx]<=target)
   take = 1 + f(idx,coins,target-coins[idx]);
    return dp[idx][target]= min(notTake,take);
  }
    int coinChange(vector<int>& coins, int target) {
   dp= vector<vector<int>>(coins.size(),vector<int>(target+1,-1));
       
 int res= f(coins.size()-1,coins,target);
      return res>=1e9 ? -1 : res;
    }
};