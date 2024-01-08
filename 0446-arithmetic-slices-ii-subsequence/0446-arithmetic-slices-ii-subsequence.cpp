class Solution {
public:
    int numberOfArithmeticSlices(vector<int>&arr) {
        
        int ans = 0,n = arr.size();
        vector<unordered_map<int,int>>dp(n+1);
        for(int i = 1;i<n;i++){
            for(int j = 0;j<i;j++){
                long long cd= 1ll*arr[i]-arr[j];
                if(cd >= INT_MAX || cd<=INT_MIN) continue;
                dp[i][cd]++;
                cd  = static_cast<int>(cd);
                if(dp[j].count(cd)){
                    dp[i][cd] += dp[j][cd];
                    ans+= dp[j][cd];
                }
            }
        }
        return ans;
    }
};