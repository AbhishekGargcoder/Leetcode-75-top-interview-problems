class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& req) {
     unordered_map<int,vector<int>>hm;
     for(int i =0;i<req.size();i++){
         hm[req[i][0]].push_back(req[i][1]); 
     }
     vector<int>indeg(n,0);
     for(auto it= hm.begin();it!=hm.end();it++)
        indeg[it->first] = it->second.size();
    queue<int>q;
     for(int i =0;i<n;i++)
        if(indeg[i]==0) q.push(i);
    while(!q.empty()){
        int curr = q.front();q.pop();
        for(auto it= hm.begin();it!=hm.end();it++){
            for(int i=0;i<it->second.size();i++){
                if(it->second[i]==curr){
                    indeg[it->first]--;
                    if(indeg[it->first]==0) q.push(it->first);
                }
            }
        }
    }
    for(int i =0;i<n;i++ )
        if(indeg[i]!=0) return false;
    return true;
    }
};



