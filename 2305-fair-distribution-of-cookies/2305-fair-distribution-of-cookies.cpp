class Solution {
public:
    int res = INT_MAX;
    void distribute(vector<int>&cookies, int k,vector<int>&b,int s){
        int n = cookies.size();
        if(s==cookies.size()){
           int  max =  *max_element(b.begin(),b.end());
           res = min(max,res);
            return;
        }
        int max;
        for(int i=0;i<k;i++){
            b[i]+= cookies[s];
            distribute(cookies,k,b,s+1);
            // max = *max_element(b.begin(),b.end());
            // res =min(res,max);
            // cout<<res<<" ";
            b[i]-=cookies[s];
        }
        // res =min(res,max);

    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>b(k,0);
        distribute(cookies,k,b,0);
        return res;
    }
};