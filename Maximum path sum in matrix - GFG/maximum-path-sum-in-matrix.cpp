//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int N, vector<vector<int>>&grid)
    {
        // code here
       int n = grid [0].size() ;
      int m = grid.size();
//  vector<vector<int>>dp= vector<vector<int>>(m, vector<int>(n, 0));
  vector<int>prev(n,0);  
  for(int j=0;j<n;j++)
         prev[j]=grid[0][j];
  for(int i=1;i<m;i++){
      vector<int>curr(n, 0);
    for(int j=0;j<n;j++){
       int up= grid[i][j]+ prev[j];
        int ld, rd;ld=rd= -1e6;
       if(j>0)
       ld= grid[i][j]+prev[j-1];
       if(j<n-1)
     rd = grid[i][j]+prev[j+1];
 curr[j]= max(up, max(ld, rd));
      }
      prev = curr;
   }
    int maxi=prev[0];
   for(int i=1;i<n;i++)
    maxi= max(maxi, prev[i]);
      return maxi;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends