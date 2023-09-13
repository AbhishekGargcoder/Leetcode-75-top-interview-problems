//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int n, int sum){
          string res ="";
         if(sum==0){
            if(n>1) return "-1";
            return "0";
             
         }
         int s=0;
          for(int i=0;i<n;i++){
              int count =0;
              s = s+9;
              if(s>sum)
             for(int i=0;s>sum&&i<9;i++){
                s--;
                count++;
            }
        //    cout<<" s ="<<s;
        //    if(s>sum) return "-1";
      //     s = s+9;
       //    cout<<s<<" ";
           int x = 9-count;
           char c = x+48;
           res = res + c;
          }
          
         if(s==sum) return res;
         return "-1";
          
      //    cout<<s<<endl;
          return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends