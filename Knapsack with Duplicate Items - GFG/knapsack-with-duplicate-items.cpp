//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
vector<vector<int>>dp;
    int f(int idx,int w,int *val, int *wt){
        if(idx==0){
           if(wt[idx]<=w) return (w/wt[0])*val[0];
           return 0;
        }
        if(w==0) return 0;
        if(dp[idx][w]!=-1) return dp[idx][w];
        int notTake=0,take=-1e9;
        notTake= 0+ f(idx-1,w,val, wt);
    if(wt[idx]<=w) take = val[idx] + f(idx,w-wt[idx],val, wt);
        return dp[idx][w]=max(take, notTake);
    }
    int knapSack(int n, int w, int val[], int wt[])
    {
        dp= vector<vector<int>>(n,vector<int>(w+1,-1));
       return f(n-1,w,val,wt);
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