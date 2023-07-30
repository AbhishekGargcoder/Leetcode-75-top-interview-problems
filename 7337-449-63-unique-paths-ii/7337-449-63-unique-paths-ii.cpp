class Solution {
public:
    vector<vector<int>>dp;
   int getPaths(vector<vector<int>>&grid,int i, int j){
  if(i==0&& j==0&&!grid[i][j]) return 1;
  if(i<0 or j<0) return 0;
  if(grid[i][j]==1) return 0;
 if(dp[i][j]!=-1) return dp[i][j];
  int up= getPaths(grid,i-1, j);
  int left=getPaths(grid,i,j-1);
    return dp[i][j]= up + left;
  }
    int uniquePathsWithObstacles(vector<vector<int>>&grid) {
       
        int m = grid.size();
        int n = grid[0].size();
     dp =vector<vector<int>>(m, vector<int>(n,-1));
 return getPaths(grid,m-1, n-1);
    }
};