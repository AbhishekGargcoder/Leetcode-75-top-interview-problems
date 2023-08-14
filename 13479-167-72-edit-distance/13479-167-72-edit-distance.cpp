class Solution {
public:
    vector<vector<int>>dp;
    int f(int i,int j,string s1,string s2){
  if(i<0)return j+1;
  if(j<0) return i+1;
    if(dp[i][j]!=-1) return dp[i][j];
      
   if(s1[i]==s2[j])
      return dp[i][j]= 0+f(i-1,j-1,s1,s2);
   return dp[i][j]= min(1+f(i,j-1, s1, s2),min(1+f(i-1,j, s1, s2), 1+ f(i-1, j-1, s1,s2)));
        
       
    
 }
    int minDistance(string s1, string s2) {
       int n=s1.length (),m=s2.length();
        dp=vector<vector<int>>(n,vector<int>(m, -1));
    return f(n-1,m-1,s1,s2);
    }
};