class Solution {
public:int n, m;

    vector<vector<bool>>dp;

    int f(int i,int j, string s1,string s2){
    if(i<0 && j<0) return true;

if(i<0 && j>=0) return false;

       if(i>=0 && j<0){

           int ii=i;

           while(ii>=0&&s1[ii]=='*') ii--;

           if(ii==-1) return true;

           return false;

       }

   //    if(dp[i][j]!=-1) return dp[i][j];

       if(s1[i]==s2[j] or s1[i]=='?')return dp[i][j]= f(i-1,j-1,s1, s2);

       if(s1[i]=='*'){

           return dp[i][j]=f(i-1,j,s1, s2) or f(i,j-1,s1, s2);

       }

       return dp[i][j]=false;

         

    }

    bool match(string s1, string s2)

    { n= s1.length(),m=s2.length();

  //  dp=vector<vector<int>>(n,vector<int>(m,-1));

        return f(n-1,m-1,s1,s2);

    }
    bool isMatch(string s2, string s1) {
  n= s1.length(),m=s2.length();
  dp= vector<vector<bool>>(n+1,vector<bool>(m+1,false));
    dp[0][0]=true;
  for(int j=1;j<=m;j++) 
      dp[0][j]=false;
 for(int i=1;i<=n;i++){
  bool flag = true;
 for(int ii=1;ii<=i;ii++){
     
   if(s1[ii-1]!='*'){
    //    dp[i][0] = false;
       flag=false;
       break;
    }
 }
   dp[i][0] = flag;
    
   }
 for(int i=1;i<=n;i++){
   for(int j=1;j<=m;j++){
     if(s1[i-1]==s2[j-1] || s1[i-1]=='?')
      dp[i][j]= dp[i-1][j-1];
     else if(s1[i-1]=='*')
      dp[i][j]= dp[i-1][j] |dp[i][j-1];
    else  dp[i][j]= false;
  }
 }
        return dp[n][m];
         

    
        
    }
};