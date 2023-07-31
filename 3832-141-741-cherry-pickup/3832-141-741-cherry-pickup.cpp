class Solution {
public:
 vector<vector<vector<vector<int>>>>dp;
  int f(vector<vector<int>>&grid,int i1,int j1,int i2, int j2){
    int r = grid.size (), c= grid[0].size();
      
  if(j1>=c or j2>=c or i1>=r or i2>=r or grid[i1][j1]==-1 or grid[i2][j2]==-1) return -1e8;
  
if(dp[i1][j1][i2][j2]!=-1)   return dp[i1][j1][i2][j2];
  if(i1==r-1 &&j1==c-1) return grid[i1][j1];
 //  if(i2==r-1&&j2==c-1) return grid[i2][j2];
      int maxi=0;
// if(dp[i1][j1][i2][j2]!=-1) return dp[i1][j1][i2][j2];
 if(i1==i2&&j1==j2)
     maxi= grid[i1][j1];
 else maxi= grid[i1][j1]+ grid[i2][j2];
 maxi+= max(max(f(grid, i1+1,j1,i2+1, j2), 
   f(grid, i1+1,j1, i2,j2+1)), 
 max(
  f(grid,i1, j1+1,i2+1,j2), 
   f(grid,i1, j1+1,i2,j2+1)));
     
return dp[i1][j1][i2][j2]=maxi;
      }
 // if(i1==i2&& j1==j2) return grid[i1][j1];
//for(int di=;di<=1;di++){
//  for(int dj=0;dj<=1;dj++){
 //            f(grid,i1,j1+d
  
     
     
    
 
  int cherryPickup(vector<vector<int>>& grid) {
        int r = grid.size(), c= grid[0].size();
       dp= vector<vector<vector<vector<int>>>>(r,vector<vector<vector<int>>>(c, vector<vector<int>>(c,vector<int>(c,-1))));
     int res =f(grid,0, 0,0,0);
        if(res <0) return 0;
        return res;
    
}
    };/*10100

00100

00111

In above example we should be able to pick all cherries. I leave it up to you to figure out two paths that collect all cherries. 

But, with our approach person1 will collect 9 cherries leaving once that is on the right(1,4) and on the left(2,0). 

Then person2 won't be able to collect both cherries he can collect only right one or only left one. 

Approach #2: 

Now, we know that we want collectively maximum cherries.

So, we have to do the traversal of both paths at the same time and select maximum global answer. 
(

        Math.max(cherryPickup(grid, n, r1;

  }

}*/