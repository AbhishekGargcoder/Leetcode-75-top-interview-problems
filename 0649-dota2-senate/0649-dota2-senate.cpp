class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>r,d;
        for(int i =0;i<senate.length();i++)
            if(senate[i]=='R')
                r.push(i);
            else d.push(i);
        while(r.empty()==false&&d.empty()==false){
            int r1 = r.front();
            int d1 = d.front();
            r.pop(),d.pop();
            if(r1<d1){
                r.push(r1+senate.length());
            }
            else{
                d.push(r1+senate.length());
            }
        }
        if(r.empty()==true) return "Dire";
        return  "Radiant";

    }
};