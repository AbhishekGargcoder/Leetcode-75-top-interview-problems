//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {
       vector<long long>cat(n+1,0) ;
       int mod=1e9+7;
      cat[0]=1;
      for(int i=1;i<=n;i++){
          for(int j=0;j<i;j++){
              cat[i]= (cat[i]+ (cat[j]*cat[i-j-1])%mod)%mod;
          }
      }
      return cat[n];
      
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends