class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>hm;
        for(char &c:s) hm[c]++;
        string ans = "";
        for(char &c:order){
            if(hm.count(c)){
                while(hm.count(c)){
                    ans+=c;
                    hm[c]--;
                    if(hm[c]==0) hm.erase(c);
                }
            }
        }
        for(auto &p:hm){
            char c= p.first;
            while(p.second-->0){
                ans+=c;
            }
        }
        return ans;
    }
};