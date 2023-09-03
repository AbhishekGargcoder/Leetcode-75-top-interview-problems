//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    long long  fact(int n ){
        long long  f = 1;
        for(int  i =1;i<=n;i++)
            f = (f*i);
        return f;
    }
    long long  rank(string s){
        int n = s.length();
        long long perm = fact(n-1);
        long long res = 0,k= 1;
        for(int i =0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(s[j] < s[i]){
                    res = (res + perm);
                }
            }
            if(n-k!=0)
            perm =(perm/(n-k));
            k++;
        }
        res = res+1;
        return res;
    }
    long long findRank(string s) {
        return rank(s);
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        Solution obj;
        long long ans = obj.findRank(s);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends