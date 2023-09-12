//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   long long getFactors(long long n){
       long long  res=1, i;
       for(i=2;i*i<=n;i++){
          if(n%i==0){
       //     cout<<i<<" x "<<n/i<<" ";
               res+=i;
               res+=n/i;
           } 
       }
     // if(n%i==0) res+=i;
       return res;
   }
    int isPerfectNumber(long long n) {
        return (getFactors(n)==n)&&n!=1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends