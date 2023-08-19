//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long sum)
    {
        int s = 0,e = 0,windowSum = 0;
        vector<int>res(2,-1);
        if(sum == 0) return {-1};
        for(int i= 0;i<n;){
            if(windowSum+arr[i] == sum){
                // cout<<"equal1\n";
                res[0]= s+1;
                if(e<s) res[1] = e = s;
                else res[1] = i; //e
                res[1]++;
                return res;
            }
            else if(windowSum+arr[i]<sum){
                windowSum += arr[i];
                 e = i,i++;
            }
            else if(windowSum+arr[i]>sum){
                windowSum-=arr[s];
                if(s==e) s++,e++;
                else s++;
            }
        }
        // cout<<"equal2\n";
        if(windowSum==sum){
            res[0] = s+1,res[1] = e+1;
            return res;
        }
        return {-1};
            
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends