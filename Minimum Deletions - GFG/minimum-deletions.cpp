//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  vector<vector<int>>dp;
  int f(int i, int j,string s1,string s2){
      
        if(i==-1 || j==-1) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]){
            return dp[i+1][j+1]= 1+f(i-1,j-1,s1,s2);
        }
        return dp[i][j]=max(f(i,j-1,s1, s2),
         f(i-1,j, s1, s2));
      
      
  }
    int minimumNumberOfDeletions(string s1){ 
         int n=s1.length();
         dp=vector<vector<int>>(n+1,vector<int>(n+1,0));
         
         string s2=s1;

         reverse(s2.begin(),s2.end());
          //      if(i==-1 || j==-1) return 0;
      //  if(dp[i][j]!=-1) return dp[i][j];
      //  if(s1[i]==s2[j]){
        //    return dp[i][j]= 1+f(i-1,j-1,s1,s2);
     //   }
    //    for(int i=0;i<=n;i++) dp[i][0]=dp[0][i]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s1[i]==s2[j])
                  dp[i+1][j+1]= 1+ dp[i][j];
                else{
                   dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        return n-dp[n][n];
    //    return dp[i][j]=max(f(i,j-1,s1, s2),
    //     f(i-1,j, s1, s2));
      
    //   return n-f(n-1,n-1,s,s2);
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends