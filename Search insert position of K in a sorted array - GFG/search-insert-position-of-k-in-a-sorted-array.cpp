//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>arr, int n, int key)
    {
        int l = 0,h = arr.size()-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(arr[mid]==key) return mid;
            else if(arr[mid]>key){
                if(mid-1>=0&&arr[mid-1]<key)  return mid;
                h = mid-1;
            }
            else{
                if(mid+1<n&&arr[mid+1]>key) return mid+1;
                l = mid+1;
            }
        }
        if(arr[0]>key) return 0;
        return n;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends