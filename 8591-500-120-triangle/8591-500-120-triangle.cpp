class Solution {
public:
   vector<vector<int>>dp;
    int getMinPath(vector<vector<int>>&triangle,int i, int j,int m){
   //  int m= triangle.size();
   //   if(i>=m) return 0;
   if(i==m-1) return triangle [i][j];   
  //   int n = triangle[i].size();
//if(j>=n) return 0;
if(dp[i][j]!=-1) return dp[i][j];       
  int sameIdx=0, rightIdx=0;
sameIdx =
getMinPath(triangle,i+1,j,m) ;
    rightIdx = dp[i][j]= getMinPath(triangle,i+1,j+1,m);
  
  return dp[i][j]=min(sameIdx,rightIdx)+triangle [i][j];
        
 }
    int minimumTotal(vector<vector<int>>&triangle) {
        int m = triangle.size();
        dp= vector<vector<int>>(m,vector<int>(2*m, -1));
        return getMinPath(triangle,0,0,m);
    }
};