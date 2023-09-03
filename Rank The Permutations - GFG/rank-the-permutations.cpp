//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
      int MOD ;
    long long  fact(int n ){
        long long  f = 1;
        for(int  i =1;i<=n;i++)
            f = (f*i);
        return f;
    }
    long long  rank(string s){
        MOD = 1e6+3;
        map<char,int>mp;
        int n = s.length();
        // for(int i =0;i<n;i++)
        //     mp[s[i]]++;
        // for(auto c: mp) if(c.second >1)return 0;
        long long res = 0,k= 1;
        // bool visit[256] = {0};
        for(int i =0;i<n;i++){
            // visit[s[i]] = true;
            for(int j = i+1;j<n;j++){
                if(s[j] < s[i]){
                    res = (res + fact(n-k));
                }
            }
            // cout<<res<<" ";
            // cout<<endl;
            k++;
        }
        res = res+1;
        return res;
    }
    long long findRank(string s) {
        //code here
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