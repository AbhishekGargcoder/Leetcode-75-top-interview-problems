//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long max(long long a,long long b,long long c=LLONG_MIN){
        return (a > b ? (a > c ? a : c ) : (b>c ? b:c));
    }
    long long maxSubarraySum(int arr[], int n){
        long long sum = 0,ans = LLONG_MIN;
        for(int i = 0;i<n;i++){
            ans =max(ans,arr[i],(arr[i]+sum));
            sum = max((arr[i]+sum),arr[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends