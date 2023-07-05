class Solution {
public:
    int longestSubarray(vector<int>&arr) {
        int z = 0,n = arr.size(),res = 0,l =0;
        
        for(int r =0;r<n;r++){
           if(arr[r]==0){
               z++;
               while(z>1){
                   if(arr[l]==0){
                       z--;
                   }
                   l++;
               }
           }
               res = max(res,r-l+1-z);
           }
        if(n==res) return res-1;
        return res;
    }
};