class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>res;
        for(int i =0;i<2;i++){
            for(auto e : nums) res.push_back(e);
        }
        return res;
    }
};