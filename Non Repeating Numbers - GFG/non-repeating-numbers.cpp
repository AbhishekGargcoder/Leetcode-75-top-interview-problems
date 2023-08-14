//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int>singleNumber(vector<int>arr) 
    {
      vector<int>res(2, 0);
      int xr=0;
      int n=arr.size();
      for(int i=0;i<n;i++)
          xr = xr ^ arr[i];
      int setBit = xr&(~(xr-1));
      for(int i=0;i<n;i++){
         if((arr[i]&setBit)!=0)
             res[0]=res[0]^arr[i];
         else 
             res[1]=res[1]^arr[i];
      }
     if(res[0]>res[1])
        swap(res[0], res[1]);
     return res;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends