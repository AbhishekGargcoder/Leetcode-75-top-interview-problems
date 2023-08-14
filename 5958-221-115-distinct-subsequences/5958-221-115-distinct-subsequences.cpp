class Solution {
public:
    string t,s,temp="";
  vector<vector<int>>dp;
   // vector<int>dp;
 int f(int i,int j){
    /* if(i==s.length()){
         if(temp==t) return 1;
         return 0;
     }*/
   if(j<0) return 1;
  if(i<0)  return 0;
     
   //  if(temp==t)
   //      return 1;
  if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==t[j])
 return dp[i][j]=f(i-1,j-1)+
                  f(i-1,j);
    return dp[i][j]=f(i-1, j);
  }
     /*
     int notTake=0,take =0;
     notTake= f(i+1,temp,j);
if(t.length()>j){
   //  temp += s[i];
     take +=f(i+1,temp+s[i],j+1);
   }
     return take + notTake; 
     
  } */ 
     
    int numDistinct(string s, string t) {
        this->t=t;
        this->s=s;
  int n=s.length(),m=t.length();
dp= vector<vector<int>>(n+1,vector<int>(m+1,-1));
   //   dp= vector<int>(n,-1);            
        return f(n-1,m-1);
    }
};