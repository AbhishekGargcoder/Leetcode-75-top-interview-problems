//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    vector<vector<int>>dp;
    int n;
    int f(int i,int p,int *arr){
        if(i==n) return 0;
        if(i==n-1){
            if(p==0){
                return arr[i];
            }
            return 0;
        }
        if(dp[i][p]!=-1) return dp[i][p];
        int loot=0, notLoot=0;
        if(p==0 || p==2) 
        loot = arr[i] + f(i+1,1,arr);
        notLoot = f(i+1,0,arr);
        return dp[i][p]= max(loot,notLoot);
    }
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        this->n=n;
        dp=vector<vector<int>>(n+1,vector<int>(3,-1));
        return f(0,2,arr);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends