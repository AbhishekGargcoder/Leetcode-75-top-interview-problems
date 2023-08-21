class Solution {
public:
    int tribonacci(int n) {
        int prev1 = 1,prev2 = 1,prev3 = 0;
        if(n == 0) return 0;
        int curr = 1;
        for(int i =3;i<=n;i++){
            curr = prev1 + prev2 + prev3;
            int temp1 = prev1,temp2 = prev2;
            prev1 = curr;
            prev2 = temp1;
            prev3 = temp2;
        }
        return curr;
    }
};