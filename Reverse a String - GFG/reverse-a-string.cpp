//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    void rev(string &s,int l,int h){
        if(l==h) return;
        swap(s[l],s[h]);
        rev(s,l+1,h-1);
    }
    public:
    string reverseWord(string s)
    {
        int n = s.length();
        rev(s,0,n-1);
        return s;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends