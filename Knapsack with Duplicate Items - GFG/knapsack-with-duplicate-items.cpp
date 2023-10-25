//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
vector<vector<int>>dp;
    int mxWt, s;
    int f(int i,int w,int *val,int *wt){
        if(i==s) return 0;
     //   cout<<28;
        int pick=0, notPick =0;
        if(dp[i][w]!=-1) return dp[i][w];
        notPick = f(i+1, w,val, wt);
        if(mxWt >=w+wt[i] ) 
        pick =val[i]+ f(i,w+wt[i],val, wt);
   //     cout<<pick<<" " ;
        return dp[i][w]= max(pick,notPick);
    }
    int knapSack(int n, int w,int val[], int wt[])
    {
        mxWt=w;
        this->s=n;
        dp=vector<vector<int>>(n+1, vector<int>(w+1,-1)) ;
        return f(0,0, val, wt);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends