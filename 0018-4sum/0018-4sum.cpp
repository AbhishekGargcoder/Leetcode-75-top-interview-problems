class Solution {
public:
    vector<vector<int>> fourSum(vector<int>&arr, int target) {
         int n = arr.size();
        sort(arr.begin(),arr.end());
        unordered_map<int,int>hm;
        set<vector<int>>hashset;
        for(int k = 0; k< n ;k ++ ){
            long long int sum = target - arr[k];
            for(int i = k+1; i < n ;i ++){
            sum -=arr[i];
            int s = i+1,e = n-1;
            while(s<e){ 
                if(arr[s]+arr[e]==sum){
                    vector<int>temp({arr[i],arr[s],arr[e],arr[k]});
                    hashset.insert(temp); 
                    cout<<s<<" "<<e<<" ";
                    e--,s++;
                }
                else if(arr[s]+arr[e]>sum)  e--;
                else s++;
            }
                sum = target-arr[k];
        }    
        }
        
        vector<vector<int>>res;
        for(auto e:hashset){
            res.push_back(e);
        }
        return res;
    }
};