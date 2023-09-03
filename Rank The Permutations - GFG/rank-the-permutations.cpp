//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int MOD ;
    int fact(int n ){
        int f = 1;
        for(int i =1;i<=n;i++)
            f = (f*i) %  MOD;
        return f%MOD;
    }
    int rank(string s){
        MOD = 1e6+3;
        map<char,int>mp;
        int n = s.length();
        for(int i =0;i<n;i++)
            mp[s[i]]++;
        for(auto c: mp) if(c.second >1)return 0;
        int res = 0,k= 1;
        bool visit[256] = {0};
        for(int i =0;i<n;i++){
            visit[s[i]] = true;
            for(int j = i+1;j<n;j++){
                if(s[j] < s[i]){
                    res = (res + fact(n-k)) % MOD;
                }
            }
            // cout<<res<<" ";
            // cout<<endl;
            k++;
        }
        res = res+1;
        return res%MOD;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.rank(S)<<endl;
    }
    return 0;
}
// } Driver Code Ends