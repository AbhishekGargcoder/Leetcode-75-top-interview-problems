//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int gcd(int a, int b){
        while(b){
           int temp=  a%b;
           a = b;
           b=temp;
         
        }
        return a;
    }
    int countFractions(int n, int num[], int deno[])
    {
        map<pair<int,int>,int>m;
        int res=0;
        for(int i=0;i<n;i++){
           int g = __gcd(num[i],deno[i]);
           pair<int, int>fr;
           int x, y;
           x=fr.first= num[i]/g;
           y=fr.second=  deno[i]/g;
           int z = y-x;
          if(m.count({z,y})){
              res += m[{z, y}];
          }    
          
           m[{x, y}]++;
           
           
        }

        
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends