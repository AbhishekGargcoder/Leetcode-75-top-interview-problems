//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
  const int MOD = 1000000007;
	int distinctSubsequences(string s)
	{
	     int n = s.length();
    
    vector<long long> dp(n + 1, 0);
    dp[0] = 1;
    
    unordered_map<char, int> last_occurrence;
    
    for (int i = 1; i <= n; i++) {
        dp[i] = (2 * dp[i - 1]) % MOD;
        
        if (last_occurrence.find(s[i - 1]) != last_occurrence.end()) {
            int j = last_occurrence[s[i - 1]];
            dp[i] = (dp[i] - dp[j - 1] + MOD) % MOD;
        }
        
        last_occurrence[s[i - 1]] = i;
    }
    
    return (dp[n]+ MOD) % MOD;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends