//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int largestIsland = 0;
        //the variable label is used to label different islands in the grid. 
        int label = 2;
        //The areas unordered map keeps a record of the sizes of each island, with the label as the key and the area as the value.
        unordered_map<int, int> areasOfIsland; 
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    unordered_set<int> visited;
                    int count = 0;
                    dfs(grid, i, j, label, visited, count);
                    areasOfIsland[label] = count;
                    label++;
                    largestIsland = max(largestIsland, count);
                }
            }
        }
    
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    unordered_set<int> neighbor;
                    if (i > 0) neighbor.insert(grid[i - 1][j]);
                    if (i < n - 1) neighbor.insert(grid[i + 1][j]);
                    if (j > 0) neighbor.insert(grid[i][j - 1]);
                    if (j < n - 1) neighbor.insert(grid[i][j + 1]);
    
                    int newCount = 1;
                    for (int island : neighbor) {
                        newCount += areasOfIsland[island];
                    }
                    largestIsland = max(largestIsland, newCount);
                }
            }
        }
    
        return largestIsland;
    }
    
    
    //painting the cells color of label
     void dfs(vector<vector<int>>& grid, int i, int j, int label, unordered_set<int>& visited, int& count) {
        int n = grid.size();
        if (i < 0 || j < 0 || i >= n || j >= n ){
            return;
        }   
        if(grid[i][j] != 1 ){
            return;
        }
        if(visited.count(i * n + j) == 1){
            return;
        }

        visited.insert(i * n + j);
        count++;
        grid[i][j] = label; //labelling each cell that it belongs to a paricular client
        dfs(grid, i + 1, j, label, visited, count);
        dfs(grid, i - 1, j, label, visited, count);
        dfs(grid, i, j + 1, label, visited, count);
        dfs(grid, i, j - 1, label, visited, count);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        cin>>n;
        vector<vector<int>>grid(n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>grid[i][j];
        Solution ob;
        cout<<ob.largestIsland(grid)<<endl;
    }
    return 0;
}

// } Driver Code Ends