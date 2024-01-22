class Solution {
public:
     vector<int> findErrorNums(vector<int>&arr) {
        unordered_map<int,int>hm;
        for(int e: arr){
            cout<<e<<" ";
            hm[e]++;
        }
        int n = arr.size();
        vector<int>ans;
        for(int i = 1; i<=n ;i++){
        if(hm.count(i)&&hm[i]==2){ans.push_back(i); break;}

        }
        for(int i = 1; i<=n ;i++){
            if(hm.count(i)==0){
                ans.push_back(i);break;
            }
        }
         return ans;
     }
};