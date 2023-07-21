//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int power(int a, int b,int m){
	    long long  res=1;
	/*    while(b){
	        if(b&1) res =res *a;
	        a = a*a;
	        if(m<res) return -1;
	        
	        b = b>>1;
	        
	    }*/
	  for(int i=0;i<b;i++){
	      res = res *a;
	      if(res >m) return 2;
	  }
	  if(res == m) return 1;
	    return -1;
	}
	int NthRoot(int n, int m)
	{
	    int l=1, h= m;
	    while(l<=h){

	      int mid = l + (h-l)/2;	     
	      int r= power(mid, n,m);
	   /* if(t==1&&x==n)
	    if(t==0) h=mid-1;
	    else  l=mid+n*/
	 //   cout<<r<<" ";
	   
	        if(r==1)
	         return mid;
	        else if(r==2)
	         h= mid-1;
	        else
	            
	        
	         l= mid+1;
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends