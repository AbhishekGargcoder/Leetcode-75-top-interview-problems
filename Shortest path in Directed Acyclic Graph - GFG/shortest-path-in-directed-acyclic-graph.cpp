//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
/*class Solution {
  public:
     
   vector<int> shortestPath(int n,int m,vector<vector<int>>&edges){
       vector<int>dist(n,1e8), indeg(n, 0);
       vector<vector<pair<int,int>>>adj(n);
       for(auto e : edges){
           adj[e[0]].push_back({e[1],e[2]});
           indeg[e[1]]++;
       }
      queue<int>q;
     for(int i=0;i<n;i++)
        if(indeg[i]==0) {
         q.push(i);
         dist[i]=0;
        }
       q.push(0);
       dist[0]=0;
       while(q.empty()==false){
           int curr = q.front();q.pop();
           for(auto v : adj[curr]){
              dist[v.first] = min(dist[v.first],dist[curr]+v.second);
              q.push(v.first);
           }
       }
       for(auto &d :dist)
         if(d== 1e8) d= -1;
       return dist;
    }
};*///POTD_C++

class Solution {
  public:
     vector<int> shortestPath(int N, int M, vector<vector<int>>& edges) {
        vector<vector<vector<int>>> adj(N);
    
        for (int i = 0; i < N; i++) {
            adj[i] = vector<vector<int>>();
        }
    
        for (int i = 0; i < M; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
    
            vector<int> t1 = { v, w };
            adj[u].push_back(t1);
        }
    
        queue<vector<int>> q;
        vector<int> dist(N, INT_MAX);
    
        dist[0] = 0;
        q.push({ 0, 0 });
    
        while (!q.empty()) {
            vector<int> values = q.front();
            q.pop();
    
            int node = values[0];
            int distance = values[1];
    
            for (vector<int> in : adj[node]) {
                int neighbor = in[0];
                int ndistance = in[1];
    
                if (distance + ndistance < dist[neighbor]) {
                    dist[neighbor] = distance + ndistance;
                    q.push({ neighbor, dist[neighbor] });
                }
            }
        }
    
        for (int i = 0; i < N; i++) {
            if (dist[i] == INT_MAX) {
                dist[i] = -1;
            }
        }
    
        return dist;
    }   
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends