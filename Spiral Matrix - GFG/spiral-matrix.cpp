//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &matrix, int n, int m, int k)
    {
                int top,down,left,right,r = matrix.size(),c = matrix[0].size();
        top = 0,down = r-1,left = 0,right= c-1;
        vector<int>ans;
        while(left<=right && top<=down){
            for(int i = left;i<=right;i++){
                // cout<<matrix[top][i]<<" ";
                ans.push_back(matrix[top][i]);
            }
        
            top++;
            if(top>down) break;
            for(int i = top;i<=down;i++){
                // cout<<matrix[i][right]<<" ";                     
                ans.push_back(matrix[i][right]);
        } 
            right--;
            for(int i = right;i>=left;i--){
            ans.push_back(matrix[down][i]);
        }  
            down--;
            if(left>right) break;
            for(int i = down;i>=top;i--){
                // cout<<matrix[i][left]<<" ";
            ans.push_back(matrix[i][left]);
        }
            left++;
        }
        return ans[k-1];
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends