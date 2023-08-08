//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
vector<int>res;
  void f(int idx,vector<int>&arr,int sum){
      if(idx<0){ res.push_back(sum);return;}
      sum = sum+arr[idx];
      f(idx-1,arr,sum);
      sum = sum-arr[idx];
      f(idx-1,arr, sum);
        
 }
    vector<int> subsetSums(vector<int> arr, int n)
    {
          f(n-1,arr, 0);
          sort(res.begin(),res.end());
          return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends