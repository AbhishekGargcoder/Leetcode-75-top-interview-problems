class Solution {
public:string rev(string str){

      int l=0, h = str.length()-1;

      while(l<h)

        swap(str[l++],str[h--]);

        return str;

  }

//ion to find the length of longest common subsequence in two strings.

    int lcs(int n, int m, string s1, string s2)

    {

        vector<vector<int>>dp= vector<vector<int>>(n+1,vector<int>(m+1,0));

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
    int longestPalindromeSubseq(string s) {
       int n = s.length ();
        return lcs(n, n, s, rev(s));
    }
};