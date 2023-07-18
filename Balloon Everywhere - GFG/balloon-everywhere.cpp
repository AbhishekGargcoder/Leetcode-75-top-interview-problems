//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        map<char, int>mp;
        for(int i=0;i<s.length();i++){
      if(s[i]=='b'||s[i]=='a'||s[i]=='l'|| s[i]=='o'||s[i]=='n' )     
            mp[s[i]]++;
           // if(s[i]=='l'||s[i]=='o') mp[s[i]]++;
        }
    //    mp['l']=mp['l']/2;
     //   mp['o']= mp['o']/2;
        int res=INT_MAX;
        for(auto c : mp){
            if(c.first=='l' or c. first=='o'){
                res = min(res,c.second/2);
                continue;
            }
            res = min(res,c.second);
        }
       // if(mp['l']<2) return 0;
      return res;
   
   
   
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends