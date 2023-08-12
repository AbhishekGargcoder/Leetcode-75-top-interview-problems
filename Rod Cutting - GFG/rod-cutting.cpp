//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  vector<vector<int>>dp;
  int f(int idx, int n,int *prices){
      if(idx==0) return n*prices[0];
      if(dp[idx][n]!=-1) return dp[idx][n];
      int notTake= f(idx-1,n,prices);
      int take =-1e9;
      int rodLenth= idx+1;
    if(rodLenth<=n)  take =prices[idx]+ f(idx,n-rodLenth, prices);//   )
  
     return dp[idx][n]= max(notTake,take); 
      
  }
    int cutRod(int price[], int n) {
       dp= vector<vector<int>>(n, vector<int>(n+1, -1));
       return f(n-1,n,price);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends