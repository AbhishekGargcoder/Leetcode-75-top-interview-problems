class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0,n = nums.size();
        vector<int>res(n);
        for(int i =0;i<n;i++){
            sum += nums[i];
            res[i] = sum;
        }
        return res;
    }
};