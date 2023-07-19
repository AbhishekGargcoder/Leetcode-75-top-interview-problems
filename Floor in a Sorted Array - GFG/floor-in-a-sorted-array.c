//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>


// } Driver Code Ends
//User function Template for C

// Function to find floor of K
// arr[]: integer array of size N
// N: size of arr[]
// K: element whose floor is to find
int findFloor(long long int arr[], int n, long long int x) {
    
    int l = 0,h = n-1,floor = -1;
    while(l<=h){
        int mid = l + (h-l)/2;
        if(arr[mid]>x) h = mid-1;
        else{
            floor = mid;
            if(arr[mid]==x){
               ;
            }
            else{
                if(mid+1<n&&arr[mid+1]>x)  return floor;
            }
             l = mid+1;
        }
    }
    if(floor!=-1) return floor;
    if(arr[n-1]<x&&x>arr[0]) return n-1;
    return -1;
}

//{ Driver Code Starts.

int main() {
	
	long long int t;
	scanf("%lld", &t);
	
	while(t--){
	    int n;
	    scanf("%d", &n);
	    long long int x;
	    scanf("%lld", &x);
	    
	    long long int *arr;
		arr = (long long int *)malloc(n * sizeof(long long int));
	    
	    for(int i = 0;i<n;i++){
	        scanf("%lld", &arr[i]);
	    }
	    printf("%d\n", findFloor(arr, n, x) );
	   
	}
	
	return 0;
}


// } Driver Code Ends