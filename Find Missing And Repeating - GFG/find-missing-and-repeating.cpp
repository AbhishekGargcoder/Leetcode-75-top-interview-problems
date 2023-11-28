//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int mis  = 0,twc = 0 ;
        unordered_map<int,int>hm;
        for(auto e : arr){
            if(hm.count(e)) twc = e;
            hm[e]++;
        }
        for(int i = 1;i<=n;i++){
            if(!hm.count(i)){mis = i;break;}
        }
        return {twc,mis};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends