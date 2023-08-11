//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  vector<vector<long long int>>dp;
  long long int f(int i,int *coins,int n, int sum){
      if(i==0){
         // if(coins[0]<sum) return 0;
          if(sum%coins[i]==0)  return dp[i][sum]= 1;
          else return 0;
      }
      if(dp[i][sum]!=-1) return dp[i][sum];
      long long int notTake=0,take=0;
      notTake = f(i-1,coins,n, sum);
    if(coins[i]<=sum)  take =f(i,coins,n,sum-coins[i]);
    return dp[i][sum]= take + notTake;
      
  }
    long long int count(int coins[], int n, int sum) {
    dp= vector<vector<long long int>>(n,vector<long long int>(sum+1,-1));
        return f(n-1,coins,n,sum);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends