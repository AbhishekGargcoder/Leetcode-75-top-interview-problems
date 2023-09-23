class Solution {
public:
    int minimumSum(int num) {
        int mn = 10000;
        int num1 = num;
        vector<int>t;
        while(num){
            int r = num%10;
            t.push_back(r);
            num/=10;
        }
        sort(t.begin(),t.end());
        return t[0]*10+t[2] + t[1]*10+t[3];
    }
};