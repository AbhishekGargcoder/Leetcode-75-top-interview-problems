//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        vector<long long>arr(n);
        int mod = 1e9+7;
        arr[0] = 1;
        for(int i = 1 ;i<n;i++){
            for(int j = i;j>0;j--){
                if(j==i) arr[j] = 1;
                else{
                    arr[j] = (arr[j] + arr[j-1])%mod;
                }
            }
        }
        return arr;
    }
};


//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends