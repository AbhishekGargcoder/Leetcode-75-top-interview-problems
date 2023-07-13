//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        if(n==1) return 1;
        unordered_map<int,int>hm;
        for(int e=0;e<n;e++){
            hm[arr[e]]++;
        }
        unordered_map<int,int>freq;
        for(auto i: hm)
          freq[(i.second)];
        if(freq.size()==hm.size())
          return true;

        return false;
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
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends