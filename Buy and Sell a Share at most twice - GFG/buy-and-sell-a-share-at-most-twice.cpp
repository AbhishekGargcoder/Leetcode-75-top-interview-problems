//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
   int n;
int f(int idx,int transNo,vector<int>&arr,vector<vector<int>>&dp){
    if(idx==n or transNo==4) return 0;
    int profit=0;/*vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)))*/
 if(dp[idx][transNo]!=-1)
    return dp[idx][transNo];
    if(transNo&1)
     profit = max(arr[idx]+ f(idx+1,transNo+1,arr,dp), 
      0+ f(idx+1,transNo,arr, dp));
    else
      profit= max(-arr[idx]+ f(idx+1,transNo+1, arr, dp), 
    0+ f(idx+1,transNo,arr, dp));
   return dp[idx][transNo]=   profit;
}/*vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)))*/
  int maxProfit(vector<int>&arr) {
     n =arr.size();
   //  vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
   vector<vector<int>>dp(n,vector<int>(4,-1));
     return f(0,0,arr, dp);
    }


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends