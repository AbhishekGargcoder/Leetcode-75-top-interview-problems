//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
vector<vector<int>>dp;
    bool f(int i,int *arr,int target){
        if(i==0){
          if(target==0) return true;
          if(arr[0]==0 && target==0) return true;
          return false;
        } 
        if(dp[i][target]!=-1) return dp[i][target];
        if(target==0) return true;
        bool take =0,notTake=0;
       notTake= f(i-1,arr,target);
        if(target-arr[i]>=0)
            take =f(i-1,arr,target-arr[i]);
        return dp[i][target]= notTake|| take;
    }
    int equalPartition(int n, int arr[]){
        int sum=0;

        for(int i=0;i<n;i++)
           sum+= arr[i];
           if(sum%2==1) return 0;
dp=vector<vector<int>>(n, vector<int>(sum/2+1,-1));
          
         return f(n-1,arr,sum/2);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends