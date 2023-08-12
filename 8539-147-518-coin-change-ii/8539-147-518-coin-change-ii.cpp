class Solution {
public:
    vector<vector<int>>dp;
   int f(int idx,vector<int>&coins,int target){
  if(idx==0){
     if(target %coins[idx]==0) 
         return 1;
     return 0;
  }
   if(dp[idx][target]!=-1) return dp[idx][target];
  int take =0, notTake=0;
 if(coins[idx]<=target)
    take = f(idx,coins,target-coins[idx]);
    notTake= f(idx-1,coins,target);
       return dp[idx][target]=take + notTake;
}
  
    int change(int target, vector<int>& coins) {
      
     int n = coins.size();
        
  dp=vector<vector<int>>(n,vector<int>(target+1,-1));
     return f(n-1,coins,target);
    }
};