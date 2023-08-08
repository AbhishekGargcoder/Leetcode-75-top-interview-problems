class Solution {
public:
    vector<vector<int>>res;
  void f(int idx,vector<int>&arr,vector<int>&subset){
      
    res.push_back(subset);
for(int i=idx;i<arr.size();i++){
    
 if(i!=idx&&arr[i]==arr[i-1])
     continue;
 subset.push_back(arr[i]);
  f(i+1,arr,subset);
  subset.pop_back();
  } 
    
    
    
  }

    vector<vector<int>> subsetsWithDup(vector<int>&arr) {
 sort(arr.begin(),arr.end());
        vector<int>subset;
    f(0,arr,subset);
        return res;
    }
};