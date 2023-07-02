class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int sum = 0;
        int n = arr.size();
    for(int i =0;i<n;i++) sum+=arr[i];
    return ((n)*(n)+n-2*sum)/2;
    }
};