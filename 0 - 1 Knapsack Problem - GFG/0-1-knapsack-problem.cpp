//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
   // int res = INT_M;
   vector<vector<int>>dp;
    int f(int idx,int w, int *wt,int *profit){
        if(idx==0){
            if(w>=wt[idx]) return profit [0];
            return 0;
        }
        if(dp[idx][w]!=-1) return dp[idx][w];
        int notTake = 0 + f(idx-1,w,wt, profit);
        int take = INT_MIN;
        if(wt[idx]<=w) take = profit[idx]+ f(idx-1,w-wt[idx],wt,profit);
        return dp[idx][w]=max(notTake,take);
        
        
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int profit[], int n) 
    { 
        dp = vector<vector<int>>(n,vector<int>(w+1,-1));
       return f(n-1,w,wt,profit);
     //  return res;
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends