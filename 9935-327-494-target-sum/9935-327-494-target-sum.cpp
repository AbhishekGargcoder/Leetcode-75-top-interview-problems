class Solution {
public:
    int f(int idx,vector<int>&arr,int target){
     if(idx==-1){
        if(target==0) return 1;
        return 0;
     }
      
     int pos =0, neg=0;
//   if(arr[idx]<=target)
     pos = f(idx-1,arr,target-arr[idx]);
     neg = f(idx-1,arr,target-(-arr[idx]));
     return pos + neg;
        
 }
    int findTargetSumWays(vector<int>&arr, int target) {
     int n= arr.size();
        
      return f(n-1,arr,target);
    }
};