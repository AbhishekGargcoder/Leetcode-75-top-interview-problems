//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
  int n;
    vector<vector<long long>>dp;
  long long  f(int idx,int buy,vector<long long>&arr){
   if(idx>=n)
       return 0;
     long long profit=0;
 if(dp[idx][buy]!=-1)return dp[idx][buy];
  if(buy)
    profit=max(arr[idx]+f(idx+2,0,arr),0+f(idx+1,1,arr));
      
      
  else
  profit=max(-arr[idx]+f(idx+1,1,arr),0+f(idx+1,0,arr));
      
   return dp[idx][buy]=profit;
      
}
   long long maxProfit(vector<long long>&arr) {
   n= arr.size() ;
    dp=vector<vector<long long>>(n+1,vector<long long>(2,-1));
     return f(0,0,arr);
    }
    long long maximumProfit(vector<long long>&arr, int n) {
       return maxProfit(arr);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> prices;
        
        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            prices.push_back(x);
        }
        
        Solution obj;
        cout<<obj.maximumProfit(prices, n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends