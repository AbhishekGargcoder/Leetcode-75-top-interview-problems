//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int a[], int b[], int n, int m, int x) {
        //code here
           int sum=0,r=0, diff=INT_MAX;
        vector<int>res(2);
     //   int n=a.size(),m=b.size();
       int i=0, j=m-1;
     //  int sum=0;
       while(i<n&&j>=0){
           sum=a[i]+b[j];
          // if(sum<=x){
               if(abs(x-sum)<diff){
               res[0]=a[i],res[1]=b[j];
               diff=abs(x-sum);
               }
               if(sum<=x) i++;
               else j--;
          // }
      }
    
  //  cout<<res[0]<<" "<<res[1] <<endl;
      return res; }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends