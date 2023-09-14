//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<vector<int>>dp;
	int mod=1e9+7;
	int f(int i,int target,int *arr){
	    if(i<0)  return 0;
	    if(i==0){
	        if(arr[0]==0&&target==0) return 2;
	        return arr[i]==target || target==0;
	    } 
	    int take=0,notTake=0;
        if(dp[i][target]!=-1) return dp[i][target];
	    notTake = f(i-1,target,arr);
	//    if(target==0) return 1;
	    if(target-arr[i]>=0){
	        take = f(i-1,target-arr[i],arr);
	    }
	    return dp[i][target]= (take + notTake) %mod;
	}    
	int perfectSum(int arr[], int n, int target)
	{
	    dp=vector<vector<int>>(n, vector<int>(target+1, -1));
	    
        return f(n-1,target,arr);
	}
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends