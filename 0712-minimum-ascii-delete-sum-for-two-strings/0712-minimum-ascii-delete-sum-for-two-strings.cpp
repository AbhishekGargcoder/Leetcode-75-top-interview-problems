class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int n1 = s1.length(),n2 = s2.length();
     vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
        dp[0][0] = 0;
    for(int i =1;i<=n1;i++) dp[i][0]  = dp[i-1][0] + (int)s1[i-1];
    for(int i =1;i<=n2;i++) dp[0][i]  = dp[0][i-1] + (int)s2[i-1];
    for(int i =1;i<=n1;i++){
        for(int j = 1;j<=n2;j++){
            if(s1[i-1]==s2[j-1])
                dp[i][j] = dp[i-1][j-1];
            else{
                int up = dp[i-1][j] + s1[i-1];
                int left = dp[i][j-1] + s2[j-1];
                dp[i][j]  = min(up,left);
            }
        }
    }
        return dp[n1][n2];
    }
};
       