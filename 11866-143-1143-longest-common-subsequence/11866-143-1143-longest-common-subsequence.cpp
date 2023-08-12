class Solution {
public:
   vector<vector<int>>dp;
    string s1,s2;
    int lcs(int idx1,int idx2){
      if(idx1<0 or idx2<0)
          return  0;
      if(dp[idx1][idx2]!=-1)
          return dp[idx1][idx2];
      if(s1[idx1]==s2[idx2])
         return 1+ lcs(idx1-1,idx2-1);
      return dp[idx1][idx2]= max(lcs(idx1-1,idx2),lcs(idx1,idx2-1));
}
    int longestCommonSubsequence(string text1, string text2) {
        this->s1=text1, this->s2= text2;
    dp=vector<vector<int>>(text1.length()+1,vector<int>(s2.length()+1,-1));
       return lcs(s1.length()-1,s2.length()-1);
    }
};