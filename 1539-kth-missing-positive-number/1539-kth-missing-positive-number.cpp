class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_set<int>hs;
        for(int i =0;i<arr.size();i++)
            hs.insert(arr[i]);
        int i = 1,count = 0;
        while(true){
            if(hs.count(i)==0) count++;
            if(count==k) return i;
            i++;
        }
        return -1;
        
    }
};