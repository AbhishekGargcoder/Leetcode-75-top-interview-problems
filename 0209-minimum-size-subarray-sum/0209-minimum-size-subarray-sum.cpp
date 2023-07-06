class Solution {
public:
    int minSubArrayLen(int t, vector<int>&arr) {
        int res =INT_MAX,sum =0,l = 0,h =0;
        for(h;h<arr.size();h++){
            sum+=arr[h];
            if(arr[h]==t){
                res = min(res,1);
                continue;
            }
            if(sum==t){
                res= min(res,h-l+1);
                sum = sum - arr[l++];
            }
            else if(sum>t){
                while(sum>t){
                    sum -= arr[l];
                     res = min(res,h-l+1);
                    l++;
                   
                }
                if(sum==t) res = min(res,h-l+1);
            }
        }
        return res!=INT_MAX ? res : 0;
    }
};