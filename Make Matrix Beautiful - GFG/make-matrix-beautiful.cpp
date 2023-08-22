//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int r) 
    {
        int c = matrix[0].size();
        vector<int>rowSum(r,0),colSum(c,0);
    
       for(int i=0;i<r;i++){
           int sum=0 ;
           for(int j=0;j<c;j++){
               sum += matrix[i][j];
           }
           rowSum[i]= sum;
       }
     for(int j=0;j<c;j++){
           int sum=0 ;
           for(int i=0;i<r;i++){
               sum += matrix[i][j];
           }
           colSum[j]= sum;
     }
    int maxi= *max_element(rowSum.begin(),rowSum.end());
     maxi = max(maxi,*max_element(colSum.begin(),colSum.end()));
    int count=0;  
/*    for(int i=0;i<c;i++)
      cout<<colSum[i]<<" ";
    cout<<endl;
   for(int i=0;i<r;i++)
     cout<<rowSum[i]<<" ";*/
    for(int j=0;j<c;j++){
        int diff = maxi- colSum[j];
        if(diff==0) continue;
        for(int i=0;i<r;i++){
            int x= maxi-rowSum[i];
           
            if(x>=diff){
                rowSum[i]+= diff;
                count += diff;
                colSum[j]+= diff;
                break;
            }
            else{
                count += maxi - rowSum[i];
                rowSum[i] += maxi-rowSum[i];
                colSum[j]+=maxi - rowSum [i];
              //  count += maxi- rowSum [i];
                diff -= (maxi-rowSum [i]) ;
              
            }
       }
    }
/*    cout<<"\n\n";
    for(int i=0;i<c;i++)
      cout<<colSum[i]<<" ";
    cout<<endl;
   for(int i=0;i<r;i++)
     cout<<rowSum[i]<<" ";
     cout<<"count = "<<count<<endl;*/
    return count;
        //   rowSum[i]= sum;

        
        
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends