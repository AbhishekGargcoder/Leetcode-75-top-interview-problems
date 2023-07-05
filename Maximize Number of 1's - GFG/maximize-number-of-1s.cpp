//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        int z = 0,l = 0,r = 0,count = 0, res = 0;
        for(;r<n;r++){
            if(arr[r]==0){
                z++;
                int i =l;
                while(z>m){
                    if(arr[i]==0)
                    {  z--;l=i+1; break;}
                    i++;
                }
            }
            res = max(res,r-l+1);
        }
        return res;
    }  
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends