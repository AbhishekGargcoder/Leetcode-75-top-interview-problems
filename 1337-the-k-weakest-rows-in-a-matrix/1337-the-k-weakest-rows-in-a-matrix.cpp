class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>res;
        multimap<int,int>mp;
        for(int i =0;i<mat.size();i++){
            int count = 0;
            for(auto bit : mat[i]){
                if(bit==1)
                    count++;
                else break;
            }
            mp.insert(pair<int, int>(count, i));
            // mp[count]= i;
        }
        int count = 0;
        for(auto e : mp){
            count++;
            res.push_back(e.second);
            if(count==k) break;
        }
        return res;
    }
};