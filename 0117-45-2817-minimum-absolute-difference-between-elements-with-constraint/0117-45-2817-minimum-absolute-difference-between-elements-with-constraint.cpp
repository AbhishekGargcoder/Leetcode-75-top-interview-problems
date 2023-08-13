class Solution {
public:
    int minAbsoluteDifference(vector<int>&arr, int x) {
  set<int>s;
 int n= arr.size(),res= INT_MAX;
  for(int j=x;j<n;j++){
     s.insert(arr[j-x]);
     auto it= s.lower_bound(arr[j]);
    if(it!=s.end()){
        res= min(abs(arr[j]-*it), res);
    }
    if(it!=s.begin())
        it--;
      res = min(abs(arr[j]-*it),res);
   }
     return res;   
        
        
    }
};/*or(int i=0;i<nums.size();i++)
        {
            if(i-x>=0) st.insert(nums[i-x]);
            auto it=st.lower_bound(nums[i]);
            if(it!=st.end()) ans=min(abs(*it-nums[i]),ans);
            if(it!=st.begin())
            {
                it--;
                ans=min(abs(*it-nums[i]),ans);
            }
            
        }*/