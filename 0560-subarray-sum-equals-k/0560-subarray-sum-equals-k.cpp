class Solution {
public:
    int subarraySum(vector<int>&arr, int k) {
        unordered_map<int,int>hm;
        hm[0]= 1;
        int sum  =0 ,ans = 0;
        for(auto x: arr){
            sum+=x;
            if(hm.count(sum-k)) ans += hm[sum-k];
            hm[sum]++;
        }
        return ans;
    }
};