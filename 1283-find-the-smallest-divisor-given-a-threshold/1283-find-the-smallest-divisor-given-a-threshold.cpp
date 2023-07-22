class Solution {
public:
    int sum(vector<int>&arr,int x,int t){
        int sum = 0;
        for(int i =0;i<arr.size();i++){
            sum+= arr[i]/x;
            if(arr[i]%x) sum++;
        }   
        return sum;
    }
    int smallestDivisor(vector<int>&arr, int t) {
     int l = 1,h = *max_element(arr.begin(),arr.end()),res = h,r  =INT_MAX;
     while(l<=h){
         int mid = l + (h-l)/2;
         r =sum(arr,mid,t);
         if(r<=t){
             res =mid;h = mid-1;
         }
         else l = mid+1;
     }
     return res;
    }
};