class Solution {
public:
    unordered_set<string>hs;
    vector<int>dp;
    int f(string &s,int idx){
        if(idx>=s.length()) return 0;
        int res = INT_MAX;
        if(dp[idx]!=-1)return dp[idx];
        for(int i =1;idx+i<=s.length();i++){
            string subs = s.substr(idx,i);
            if(hs.find(subs)!=hs.end()){
                res = min(res,f(s,idx+i));
            }
        }
        res = min(res,1+f(s,idx+1));
        return dp[idx] =  res;
    }
    int minExtraChar(string s, vector<string>& dict) {
        int n = s.length();
        dp.resize(n+1,-1);
        for(auto word : dict) hs.insert(word);
        return f(s,0);
    }
};