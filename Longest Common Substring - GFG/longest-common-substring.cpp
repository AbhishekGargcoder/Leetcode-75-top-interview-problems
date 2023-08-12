//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    string s1, s2;
    int res=0;
    vector<vector<int>>dp;
    int f(int idx1,int idx2){
       if(idx1==0 or idx2==0) return 0;
        if(dp[idx1][idx2]!=-1) return dp[idx1][idx2];
        int subs =0; 
        if(s1[idx1-1]==s2[idx2-1]){
           subs=  1 + f(idx1-1,idx2-1);
           res = max(res,subs);
        }
       else{
           f(idx1-1, idx2);
           f(idx1, idx2-1);
       }
       return dp[idx1][idx2]=subs;
    }
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {  
    //   res =0;
      vector<vector<int>>dp(n+1,vector<int>(m+1, -1));
      for(int i=0;i<=n;i++) dp[i][0] = 0;
      for(int j=0;j<=m;j++) dp[0][j] =0;
      int res=0;
      for(int i=1;i<=n;i++){
          for(int j=1;j<=m;j++){
              if(s1[i-1]==s2[j-1])
                 res = max(res,dp[i][j]= 1 + dp[i-1][j-1]);
              else
                dp[i][j] =0;
          }
      }
      return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends