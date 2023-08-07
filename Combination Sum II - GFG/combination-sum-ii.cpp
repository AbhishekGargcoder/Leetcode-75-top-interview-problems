//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
    //     // Write your code here
    // }
     vector<vector<int>>res;
    void f(int idx ,int target,vector<int>&arr,vector<int>&sum){
            if(target==0){
                  res.push_back(sum);
            return;
            }
              
        for(int i =idx;i<arr.size();i++){
            if(i>idx&&arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            sum.push_back(arr[i]);
            f(i+1,target-arr[i],arr,sum);
            sum.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>&arr, int target) {
        vector<int>sum;
        sort(arr.begin(),arr.end());
        f(0,target,arr,sum);
        return res;
    }
    
};

    vector<vector<int>>res;
    void f(int idx ,int target,vector<int>&arr,vector<int>&sum){
            if(target==0){
                  res.push_back(sum);
            return;
            }
              
        for(int i =idx;i<arr.size();i++){
            if(i>idx&&arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            sum.push_back(arr[i]);
            f(i+1,target-arr[i],arr,sum);
            sum.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>&arr, int target) {
        vector<int>sum;
        sort(arr.begin(),arr.end());
        f(0,target,arr,sum);
        return res;
    }


//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends