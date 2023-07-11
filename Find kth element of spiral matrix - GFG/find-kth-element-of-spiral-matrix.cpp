//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int mat[MAX][MAX],int n,int m,int k)
    {
 		int t,b,l,r,count = 0;
 		t=l=0,b=n-1,r=m-1;
 		while(t!=b||l!=r){
 		    for(int i=l;i<=r;i++){
 		        count++;
 		        if(count==k) return mat[t][i];
 		        
 		    }
 		    t++;
 		    for(int i = t;i<=b;i++){
 		        count++;
 		    if(count==k) return mat[i][r];
 		        
 		    }
 		    r--;
 		    for(int i =r;i>=l;i--){
 		        count++;
 		        if(count==k) return mat[b][i];
 		    }
 		    b--;
 		    for(int i =b;i>=t;i--){
 		        count++;
 		        if(count==k) return mat[i][l];
 		        
 		    }
 		     l++;
 		}
 		return mat[n-1][m-1];
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
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends