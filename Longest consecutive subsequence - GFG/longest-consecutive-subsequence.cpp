//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int a[], int n)
    {
        vector<int>arr(n);
        for(int i = 0;i<n;i++) arr[i] = a[i];
        unordered_map<int,int>hm;
        if(!arr.size()) return 0;
        for(auto x:arr) hm[x]++;
        int ans = INT_MIN;
        for(auto p : hm){
            int x  = p.first,k = 0,cnt = 0;
            while(hm.count(x+k)){
                cnt++;
                k++;
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends