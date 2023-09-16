//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    vector<long long int >dp;
    long long countWays(int n)
    {
        dp = vector<long long int >(n+1,0);
        // return f(n);
        dp[0]  = 1;
        for(int i =0;i<=n;i++){
            if(i-1>=0)dp[i]  = (dp[i]  + dp[i-1])%mod;
            if(i-2>=0) dp[i] =(dp[i]  + dp[i-2])%mod;
            if(i-3>=0) dp[i ] = (dp[i]  + dp[i-3])%mod;
        }
        return dp[n];
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends