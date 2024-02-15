class Solution {
public:
    long long largestPerimeter(vector<int>&arr) {
       
        long long ans = 0 ;
        int n = arr.size();
        sort(arr.rbegin(),arr.rend());
        vector<long long>suff(n);
        suff[n-1] = arr[n-1];
        for(int i = n-2;i>=0;i--) suff[i] = suff[i+1] + arr[i];
        
        for(int i = 0; i < n-2 ; i++){
            int l = arr[i];
            if(suff[i+1]>arr[i]){
                ans = max(suff[i],ans);
            }
        }
        return ans!=0 ? ans:-1;
    }
};