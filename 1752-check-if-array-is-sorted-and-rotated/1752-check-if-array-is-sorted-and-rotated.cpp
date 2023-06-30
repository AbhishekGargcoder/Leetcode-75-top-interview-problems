class Solution {
public:
    bool check(vector<int>&arr) {
        int n = arr.size(),count = 0;
        for(int i =1;i<n;i++){
            if(arr[i-1]>arr[i])
                count++;
        }
        if(count>1||arr[n-1]>arr[0]&&count==1) return false;
        return true;
           
        return true;
    }
};