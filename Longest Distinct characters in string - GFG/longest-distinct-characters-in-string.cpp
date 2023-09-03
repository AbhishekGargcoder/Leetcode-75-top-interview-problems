//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    unordered_map<int,int>hm,vis;
    for(int i =0;i<s.length();i++) hm[s[i]]++;
    int res = 0,k =0;;
    for(int i =0;i<s.length();){
        if(vis.count(s[i])==0){
            vis[s[i]]++;
            res = max(res,i-k+1);i++;
        }
        else{
            vis.erase(s[k]);
            k++;
        }
    }
    return res;
}