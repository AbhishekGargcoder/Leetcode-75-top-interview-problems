//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int v, vector<int> adj[], int x) 
	{
	    queue<pair<int,int>>q;
	    q.push({0, 0});
	    vector<bool>vis(v,false);
	    vis[0]=true;
	    while(!q.empty()){
	        auto p= q.front();q.pop();
	        int u=p.first;
	        int lev = p. second;
	        vis[u]=true;
	        if(u==x) return lev;
	        for(auto v : adj[u]){
	            if(vis[v]==false)
	            q.push({v,lev+1});
	        }
	        
	    }
	    return -1;
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends