//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    int n, m;
    vector<vector<int>>dp;
    int f(int i,int j, string s1,string s2){
       if(i<0 && j<0) return true;
       if(i<0 && j>=0) return false;
       if(i>=0 && j<0){
           int ii=i;
           while(s1[ii]=='*') ii--;
           if(ii==-1) return true;
           return false;
       }
       if(dp[i][j]!=-1) return dp[i][j];
       if(s1[i]==s2[j] or s1[i]=='?')return dp[i][j]= f(i-1,j-1,s1, s2);
       if(s1[i]=='*'){
           return dp[i][j]=f(i-1,j,s1, s2) or f(i,j-1,s1, s2);
       }
       return dp[i][j]=false;
         
    }
    bool match(string s1, string s2)
    { n= s1.length(),m=s2.length();
    dp=vector<vector<int>>(n,vector<int>(m,-1));
        return f(n-1,m-1,s1,s2);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        bool x=ob.match(wild, pattern);
        if(x)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends