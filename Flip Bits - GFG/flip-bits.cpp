//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int arr[], int n)
    {
       int one =0,zero=0, res=0;
       for(int i=0;i<n;i++){
           if(arr[i]==0){
                zero++;
             
           }
           else{
             one++;
              zero--;
           }
           res = max(res, zero);
           if(zero<0) zero=0;
              
       }
       
       return one+res;
    }
};
/*for (int i=0; i<n; i++){
            if (!a[i]) {
                zero++;
            }
            else {
                zero--;
                one++;
            }
            ans=max(zero, ans);
            //cout<<one<<" "<<zero<<" "<<ans<<endl;
            if (zero<0) {
                zero=0;
            }
        }*/

//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends