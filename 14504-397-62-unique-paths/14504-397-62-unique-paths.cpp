class Solution {
public:
    vector<vector<int>>dp;
    int fun(int i, int j){
        if(i==0&&j==0) return 1;
        if(i<0  or j<0)return 0;
        if(dp[i][j]!=-1) return dp[i][j];
       int up = fun(i-1, j);
       int left = fun(i, j-1);
       return dp[i][j]=up+left;
        
    }
    int uniquePaths(int m, int n) {
        dp= vector<vector<int>>(m+1, vector<int>(n+1, -1));
        return fun(m-1, n-1);
    }
};