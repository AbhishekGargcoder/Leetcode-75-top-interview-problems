class Solution {
public:
    vector<vector<int>> threeSum(vector<int>&arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        unordered_map<int,int>hm;
        set<vector<int>>hashset;
        for(int i = 0; i < n ;i ++){
            int sum = -arr[i];
            int s = i+1,e = n-1;
            while(s<e){ 
                if(arr[s]+arr[e]==sum){
                    vector<int>temp({arr[i],arr[s],arr[e]});
                    hashset.insert(temp);
                    // break; 
                    e--,s++;
                }
                else if(arr[s]+arr[e]>sum)  e--;
                else s++;
            }
        }
        vector<vector<int>>res;
        for(auto e:hashset){
            res.push_back(e);
        }
        return res;
    }
    
};