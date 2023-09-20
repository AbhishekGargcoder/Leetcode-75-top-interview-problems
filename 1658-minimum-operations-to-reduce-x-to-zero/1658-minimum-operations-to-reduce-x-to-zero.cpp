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
            e++;
            while(curr_sum > x && s<e){
                curr_sum -= arr[s];
                s++;
            }
            if(curr_sum == x){
                res = min(res , n - (e-s));
            }
        }
        return res == INT_MAX ? -1 : res;
    }
};
/*
        while (rightIndex < n) {
            currentSum += nums[rightIndex];
            rightIndex++;
            while (currentSum > target && leftIndex < n) {
                currentSum -= nums[leftIndex];
                leftIndex++;
            }
            if (currentSum == target)
                minOperations = min(minOperations, n - (rightIndex - leftIndex));
        }
        return (minOperations == INT_MAX) ? -1 : minOperations; // Return the minimum operations or -1 if not possible
    }    
            

*/

