//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n1, int n2, int k)
    {
     //   if(n1<n2) return kthElement(arr2,arr1,n2, n1, k);
        if(k>(n1+n2))  return -1;
        int i=0, j= n1-1;
        while(i<n2&&j>=0){
            if(arr1[j]>=arr2[i])
              swap(arr1[j--],arr2[i++]);
            else break;
        }
        sort(arr1, arr1+n1);
        sort(arr2, arr2+ n2);
        if(k<=n1) return arr1[k-1];
        return arr2[k-n1-1];
        
    }
    
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends