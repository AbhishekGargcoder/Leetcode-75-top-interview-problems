class Solution {
public:
    int n;
    unordered_map<int,int>hm;
    int dfs(int num){
        if(hm.count(num)) return hm[num];
        hm[num] = 0;
        if(num!=n) hm[num] = num;
        for(int i =1;i<num;i++){
            int val = dfs(i) * dfs(num-i);
            hm[num] = max(hm[num],val);
        }
        return hm[num];
    }
    int integerBreak(int n) {
        this->n=n;
        hm[1] = 1;
        return dfs(n);
    }
};