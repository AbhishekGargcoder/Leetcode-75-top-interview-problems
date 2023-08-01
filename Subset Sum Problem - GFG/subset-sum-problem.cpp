//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
bool flag = false;
vector<vector<int>>dp;
    bool f(vector<int>&arr,int i, int k){
        if(i<0) return false;
        if(k==0)return true;
        if(i==0){return k== arr[i];}
        int pick=0,notPick=0;
        if(dp[i][k]!=-1)return dp[i][k];
        pick = f(arr,i-1,k-arr[i]);
        notPick=f(arr,i-1,k);
        if(pick or notPick){return dp[i][k] =1;};
        return dp[i][k]=0;
    }
    bool isSubsetSum(vector<int>&arr, int sum){
        int n = arr.size();
   dp= vector<vector<int>>(n,vector<int>(sum+1,-1));
   
        return f(arr,n-1,sum);
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends