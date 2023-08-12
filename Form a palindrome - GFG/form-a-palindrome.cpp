//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  vector<vector<int>>dp;
 string rev(string str){
      int l=0, h = str.length()-1;
      while(l<h)
        swap(str[l++],str[h--]);
        return str;
  }
//ion to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        dp= vector<vector<int>>(n+1,vector<int>(m+1,0));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 or j==0){ dp[i][j]=0; continue;}
                if(s1[i-1]==s2[j-1])
                  dp[i][j]= 1+ dp[i-1][j-1];
                else dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
                
            }
        }
         return dp[n][m];
    }
    int lps(string s) {
      return lcs(s.length(),s.length(),s,rev(s));
    }
    int countMin(string str){
        int n = str.length ();
       return n-lps(str);
    }
    
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends