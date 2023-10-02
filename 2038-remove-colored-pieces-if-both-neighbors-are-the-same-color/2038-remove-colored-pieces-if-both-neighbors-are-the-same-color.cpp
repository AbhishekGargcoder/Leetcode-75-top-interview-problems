class Solution {
public:
    bool winnerOfGame(string colors) {
        unordered_map<char,int>hm;
        for(auto it = colors.begin();it!=colors.end();){
            char x = *it;
            auto t = it;
            while(t!=colors.end()&&*t == x){
                t++;
            }
            hm[x]+= max(int(distance(it,t))-2,0);
            it = t;
        }
        if(hm['A']>hm['B']) return true;
        return false;
    }
};
