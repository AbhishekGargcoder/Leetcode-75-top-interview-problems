class Solution {
public:
    int minCostClimbingStairs(vector<int>&arr) {
        int prev1 = arr[1],prev2 = arr[0],curr = 0,n =arr.size();
        vector<int>dp(n+1,0);
        // dp[0] = dp[1] = arr[0];
        for(int i =2;i<n+1;i++){
            dp[i] = min(dp[i-1]+arr[i-1],dp[i-2]+arr[i-2]);
        }
        return dp[n];
    }
};