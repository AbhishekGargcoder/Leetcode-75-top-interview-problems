//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string longestString(vector<string> &words)
    {
        int n = words.size();
       unordered_map<string,int>hm;
       for(int i=0;i<n;i++){
           hm[words[i]];
       }
       int res=0; string r ="";
       for(auto s : words){
           int len = s.length ();
           string temp= s;
           while(temp!=""){
               int l = temp.length ();
               temp= temp.substr(0,l-1);
               if(hm.count(temp)==0){
                   break;
               }
           }
           if(temp==""){
               if(res <len){
                   r = s;
                   res = len;continue;
               }
 
               if(res == len){
                   if(r=="") r = s;
                   else  if(r>s) r = s;
               }
               
           }
               
           
       }
       
       return r;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends