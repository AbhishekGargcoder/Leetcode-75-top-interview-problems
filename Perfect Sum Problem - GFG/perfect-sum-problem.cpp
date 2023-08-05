//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    vector<vector<int>>dp;
    int count =0, mod=1e9+7;
    int  f(int arr[],int ind,int tgt){
      if(ind==0){ 
          if(arr[0]==0&&tgt==0) return 2;
          if(tgt==0 or arr[0]==tgt) return 1;
          return 0;
      }
      if(dp[ind][tgt]!=-1) return dp[ind][tgt];
       int take=0,notTake=0;
       if(arr[ind]<=tgt)
          take=f(arr,ind-1,tgt-arr[ind]);
       notTake= f(arr,ind-1,tgt);
   
       return dp[ind][tgt]= (take + notTake)%mod;
        
    }
	public:
	int perfectSum(int arr[], int n, int target) 
	{
	    int mod = 1e9+7;
	  dp=vector<vector<int>>(n,vector<int>(target+1,0));
    //  for(int i=0;i<=target;i++){
    
    //   if(arr[0]==0&&target==0) dp[0][0]=2;
   //   }
      if(arr[0]==0) dp[0][0]=2;
      else dp[0][0]=1;
   
      if(arr[0]!=0 && arr[0]<=target) dp[0][arr[0]]=1;
      
      for(int i=1;i<n;i++){
          for(int j=0;j<=target;j++){
              int take =0, notTake=0;
              notTake= dp[i-1][j];
              if(arr[i]<=j) 
                take = dp[i-1][j-arr[i]];
              dp[i][j] = (take + notTake)%mod;
          }
      }
      return dp[n-1][target];
       
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