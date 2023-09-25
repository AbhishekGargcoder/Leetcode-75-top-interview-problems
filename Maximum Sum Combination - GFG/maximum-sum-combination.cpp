//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int n, int k,vector<int> &a, vector<int> &b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
    //    vector<int>(k);
        int j=n-1;
        priority_queue<vector<int>>pq;
        for(int i=n-1;i>=0;i--){
            pq.push({a[i]+b[n-1],i,n-1});
        }
        vector<int>ans;
        while(k-->0){
            auto p = pq.top();pq.pop();
            ans.push_back(p[0]);
            int ai=p[1],bi=p[2];
            pq.push({a[ai]+b[bi-1],ai,bi-1});
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends