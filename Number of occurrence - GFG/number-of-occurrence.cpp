//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */ 
	int firstOcc(int *arr,int n, int x){
	    int l=0,h=n-1;
	    while(l<=h){
	        int mid = l+ (h-l)/2;
	   //     cout<<"jd";
	        if(arr[mid]>x)
	            h = mid-1;
	        else if(arr[mid]<x)
	            l=mid+1;
	        else{
	            if(mid==0 || mid-1>=0&&arr[mid-1]!=arr[mid])
	               return mid;
	            h=mid-1;
	        }
	    }
	    return -1;
	}
	int lastOcc(int *arr,int n, int x){
	    int l=0,h=n-1;
	    while(l<=h){
	        int mid = l+ (h-l)/2;
	        if(arr[mid]>x)
	           h = mid-1;
	        else if(arr[mid]<x)
	            l=mid+1;
	        else{
	            if(mid==n-1 || mid+1<n&&arr[mid+1]!=arr[mid])
	               return mid;
	            l = mid+1;
	        }
	    }
	    return -1;
	}
	int count(int arr[], int n, int x) {
	   int s = firstOcc(arr,n,x);
	   int e = lastOcc(arr,n,x);
	  if(s==-1) return 0;
	   return e-s+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends