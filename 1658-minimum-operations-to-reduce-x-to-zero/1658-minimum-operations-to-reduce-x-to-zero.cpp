class Solution {
public:
    int minOperations(vector<int>&arr, int x) {
        int n  = arr.size();
        int sum = accumulate(arr.begin(),arr.end(),0);
        x = sum-x;
        if(x<0 ) return -1;
        if(x==0) return n;
        
        int s =0,e =0 ,curr_sum = 0,res = INT_MAX;
        while(e<n){
            curr_sum += arr[e];
            while(curr_sum > x && s<e){
                curr_sum -= arr[s];
                s++;
            }
            if(curr_sum == x){
                cout<<e<<" "<<s<<endl;
                res = min(res , n - (e-s+1));
            }
            e++;

        }
        return res == INT_MAX ? -1 : res;
    }
};
