class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>count(n+1,0);
        for(int i =0;i<n+1;i++)
            if(i&1) count[i] = count[i/2] + 1;
            else count[i] = count[i/2];   
        return count;
    }
};