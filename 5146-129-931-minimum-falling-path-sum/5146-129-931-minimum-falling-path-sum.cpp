class Solution {
public:
 //   vector<vector<int>>dp;
   int f(vector<vector<int>>&grid, int i, int j,vector<vector<int>>&dp){
      int n = grid[i].size();
      if(j<0 or j>=n) return 1e9;
   if(i==0) return grid[i][j];
if(dp[i][j]!=-1) return dp[i][j];
     int up=grid[i][j]+f(grid,i-1,j, dp);
     int upRight=grid[i][j]+f(grid,i-1, j+1,dp);
    int upLeft =grid[i][j]+f(grid,i-1, j-1, dp);
   
    return dp[i][j]=min(up,min(upRight, upLeft));
       
  }
  int minFallingPathSum(vector<vector<int>>&grid) { 
      int n = grid [0].size() ;
      int m = grid.size();
  vector<vector<int>>dp= vector<vector<int>>(m, vector<int>(n, 0));
    
  for(int j=0;j<n;j++)
         dp[0][j]=grid[0][j];
  for(int i=1;i<m;i++){
    for(int j=0;j<n;j++){
       int up= grid[i][j]+ dp[i-1][j];
        int ld, rd;ld=rd= 1e6;
       if(j>0)
       ld= grid[i][j]+ dp[i-1][j-1];
       if(j<n-1)
       rd = grid[i][j]+ dp[i-1][j+1];
 dp[i][j]= min(up, min(ld, rd));
      }
   }
    int maxi=dp[m-1][0];
   for(int i=1;i<m;i++)
    maxi= min(maxi,dp[m-1][i]);
      return maxi;
  /*    int res =1e9;
 for(int i=0;i<n;i++){
   res = min(res,f(grid,m-1,i, dp));
       }
      return res;*/
    }
};/*class Solution {

public:

    

    int solve(int i, int j, vector<vector<int>>& matrix, vector<vector<int>>& dp){

        int  m =matrix[0].size();

        if(j<0 || j>m-1) return 1e9;

        if(i==0) return matrix[i][j];

        if(dp[i][j]!=-1) return dp[i][j];

        

        int st = matrix[i][j] + solve(i-1,j,matrix,dp);

        int ld = matrix[i][j] + solve(i-1,j+1,matrix,dp);

        int rd = matrix[i][j] + solve(i-1,j-1,matrix,dp);

        

        return dp[i][j] = min(st,min(ld,rd));

    }

    int minFallingPathSum(vector<vector<int>>& matrix) {

        int n = matrix.size();

        int m = matrix[0].size();

        vector<vector<int>> dp(n,vector<int>(m,-1));

        int ans=1e9;

        for(int j=0;j<m;j++){

            ans=min(ans,solve(n-1,j,matrix,dp));

        }

        return ans;

    }

};*/