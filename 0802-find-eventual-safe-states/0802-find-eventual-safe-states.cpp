class Solution {
public:
    bool isSafeNodes(vector<vector<int>>& graph,int i,vector<bool>&terminal,vector<bool>&visit){
        if(terminal[i]==true) return true;
        if(visit[i]==true) return false;
        visit[i] = true;
        int count = 0;
        for(int j = 0;j<graph[i].size();j++){
            if(terminal[graph[i][j]]==false){
                if(isSafeNodes(graph,graph[i][j],terminal,visit))                   count++;
            }
            else count++;            
        }
        if(count==graph[i].size())
           return  terminal[i] = true; 
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size(),safeNode = 0;
        vector<int>safe;
        vector<bool>visit(n,false);
        vector<bool>terminal(graph.size(),false);
        for(int i =0;i<n;i++){
            if(graph[i].size()==0){
                terminal[i]=true;
                visit[i] = true;
            }
        }
        for(int i =0;i<n;i++)
            if(visit[i]==false)
                isSafeNodes(graph,i,terminal,visit);
        for(int i =0;i<n;i++)
            if(terminal[i]) safe.push_back(i);
        return safe;
    }
};