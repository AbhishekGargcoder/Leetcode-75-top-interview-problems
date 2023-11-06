//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        int idx = -1,n = arr.size();
        int *p;
        for(int i = n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                p = &arr[i];
                idx = i; break;
            }
        }
        if(idx==-1){
         reverse(arr.begin(),arr.end());
         return arr;
        }
        for(int i = n-1;i>idx;i--){
            if(arr[i]>arr[idx]){
                swap(arr[idx],arr[i]);
                break;
            }
        }
        reverse(p+1,p+n-idx);
        return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends