class Solution {
public:
    int countOrders(int n) {
        int res = 1,mod = 1e9+7;
        for(int i =1;i<=n;i++){
            res = (((2*i-1)%mod)*(((long long int)i*res)%mod))%mod;
        }
        return res;
    }
};