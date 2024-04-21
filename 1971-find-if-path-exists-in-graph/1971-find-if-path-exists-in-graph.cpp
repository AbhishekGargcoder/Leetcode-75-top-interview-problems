class Solution {
public:
    bool f(int src, vector<vector<int>>&graph, int dest,vector<bool>&vis){
        
        vis[src] = true;
        if(src==dest) return true;
        for(int v =0 ;v<graph[src].size();v++){
            if(vis[graph[src][v]]==false) 
            if(f(graph[src][v],graph,dest,vis)) return true;
        }
        return false;
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int dest) {
        vector<vector<int>>graph(n);
        if(edges.size()==0) return true;
        for(int i  = 0; i < edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);                               graph[edges[i][1]].push_back(edges[i][0]);
        }
        bool ans= false;
        vector<bool>vis(n,false);
        // for(int i = 0 ; i <edges.size();i++){
            // if(vis[i]==/false){
                ans = f(source,graph,dest,vis);                
                // if(ans) return ans;
            // }
        // }
        return ans;        
    }
};