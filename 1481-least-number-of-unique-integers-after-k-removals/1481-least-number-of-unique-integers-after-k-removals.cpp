class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>freq;
        for(int &e:arr) freq[e]++;
        vector<int>v(freq.size());
        int i = 0 ;
        for(auto &p : freq){
            v[i++] = p.second;
        }
        sort(v.begin(),v.end());
        int n = v.size();
        for(int i = 0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
        int count = arr.size();
        
        for(i = 0; i < v.size();i++ ){
            cout<<v[i]<<" ";
            if(v[i]<=k){
                count-=v[i];
                k-=v[i];
            }
            else{
                return n-i;
            }
        }
        return 0;
        
        
    }
};