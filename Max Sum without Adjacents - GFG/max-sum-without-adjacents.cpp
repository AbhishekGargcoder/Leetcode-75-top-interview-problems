//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    int f(int *arr, int n, int i, int *dp){
      if(i>=n)   return 0;
      if(dp[i]!=-1) return dp[i];
      int left=  arr[i] + f(arr, n,i+2,dp);
      int right=  f(arr, n, i+1,dp);
      return dp[i]=max(left, right);
    }
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    
	    int dp[n];
	    fill(dp, dp+n, -1);
	  f(arr, n, 0,dp);
	  return dp[0];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends