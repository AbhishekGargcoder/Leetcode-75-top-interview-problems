class Solution {
public:
    int finalValueAfterOperations(vector<string>&s) {
        int x = 0;
        for(auto op : s){
            if(op[0]=='-' || op[2]=='-') x--;
            else if(op[0]=='+' || op[2]=='+') x++;
        }
        return x;
    }
};