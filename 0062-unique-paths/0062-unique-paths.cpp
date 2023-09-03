class Solution {
public:
    vector<vector<int>>dp;
    int m,n;
    int f(int idx1,int idx2){
        if(idx1 == 0 && idx2 ==0) return 1;
        if(idx1 <0 || idx2<0) return 0;
        if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
        int up = f(idx1-1,idx2);
        int left = f(idx1,idx2-1);
        return dp[idx1][idx2] =  up+left;
    }
    int uniquePaths(int m, int n) {
        this->m = m,this->n = n;
        dp = vector<vector<int>>(m,vector<int>(n,-1));
        return f(m-1,n-1);
    }
};