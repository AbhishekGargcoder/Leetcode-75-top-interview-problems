class Solution {
public:
    vector<int> majorityElement(vector<int>&arr) {
        unordered_map<int,int>freq;
        int n = arr.size(),cnt = 0;
        vector<int>ans;
        for(auto &x:arr) freq[x]++;
        for(auto &p : freq) if(p.second > n/3) ans.push_back(p.first);
        
        return ans;
    }
};