class Solution {
public:
    vector<vector<int>>dp;
    int getMinPath(vector<vector<int>>&grid, int i, int j){
     if(i==0&&j==0 )return dp[i][j]=grid[i][j];  
      
      if(i<0 or j< 0) return INT_MAX;
     if(dp[i][j]!=-1) return dp[i][j];
       int up= getMinPath(grid, i-1, j);
       int left = getMinPath(grid,i, j-1);
        return dp[i][j]= min(left, up)+grid[i][j];
        
   }
    int minPathSum(vector<vector<int>>& grid) {
       int m = grid.size();
       int n = grid[0].size();
       dp= vector<vector<int>>(m, vector<int>(n, -1));
    
        getMinPath(grid, m-1, n-1);
        return dp[m-1][n-1];
    }
};