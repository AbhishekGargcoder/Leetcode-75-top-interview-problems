/*class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        
    }
};*/class Solution {

public:

  vector<vector<vector<int>>>dp;

    int f(vector<vector<int>>&grid,int i,int j1,int j2){

      int c = grid[0].size(), r = grid.size();

   if(i>=r or j1<0 or j1>=c or j2<0 or j2>=c)  return -1e8;

    if(i==r-1){

        if(j1==j2) return grid[i][j1];

        else  return grid[i][j1]+ grid[i][j2];

   }

 if(dp[i][j1][j2]!=-1)return dp[i][j1][j2];

    int maxi = 0;

for(int dj1 =-1;dj1<=1;dj1++){

  for(int dj2=-1;dj2<=1;dj2++){

  if(j1==j2) maxi = max(maxi,grid[i][j1]+   f(grid,i+1,j1+dj1,j2+dj2));

else{

    maxi = max(maxi,grid[i][j1]+grid[i][j2]+ f(grid,i+1,j1+dj1,j2+dj2));

   }

  }

 }

     return dp[i][j1][j2]= maxi;

 }      int cherryPickup(vector<vector<int>>& grid) {
      
        int c = grid[0].size();
        int r = grid.size();
    /*int dp[r][c][c];
     for(int i=0;i<r;i++)
         for(int j=0;j<c;j++)
             for(int k=0;k<c;k++) dp[i][j][k]= -1;*/
  dp = vector<vector<vector<int>>>(r,vector<vector<int>>(c,vector<int>(c, -1)));
       return f(grid,0,0, c-1);
    }
}; 