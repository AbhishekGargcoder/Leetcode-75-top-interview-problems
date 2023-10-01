//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > mat, int n, int m) 
    {
        
       vector<int>res;
       int r = mat.size(),c=mat[0].size();
//   cout<<c<<" "<<m<<endl;
       if(r==1|| c==1){
     //      cout<<"only 1 row \n";
     if(r==1){
          for(int i=0;i<c;i++){
             res.push_back(mat[0][i]);
           }
         return res;  
     }
         for(int i=0;i<r;i++){
             res.push_back(mat[i][0]);
         }
       return res;
     }
       for(int i=0;i<c;i++){
           res.push_back(mat[0][i]);
       } 
       for(int i=1;i<r;i++){
           res.push_back(mat[i][mat[i].size()-1]);
       }
      for(int i=mat[r-1].size()-2;i>=0;i--){
           res.push_back(mat[r-1][i]);
       }
       for(int i=r-2;i>0;i--){
           res.push_back(mat[i][0]);
       }
       return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends