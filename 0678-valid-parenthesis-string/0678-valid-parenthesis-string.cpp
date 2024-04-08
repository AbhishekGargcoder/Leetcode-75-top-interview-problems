class Solution {
public:
    bool checkValidString(string s) {
        int left_min = 0,left_max = 0;
        for(char &c:s){
            if(c=='('){
                left_min++;
                left_max++;
            }
            else if(c==')'){
                left_min--;
                left_max--;
            }
            else{
                left_min--;
                left_max++;
            }
            if(left_max <0) return false;
            if(left_min <0) left_min = 0;
        }
        return left_min==0;
    }
};