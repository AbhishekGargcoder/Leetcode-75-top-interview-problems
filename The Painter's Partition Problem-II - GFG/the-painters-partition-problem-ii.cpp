//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
   int canPaint(int *arr,int n,int work){
        int numOfWorkers = 1,workDone = 0;
        for(int i = 0;i<n;i++){
            if(workDone+arr[i]<=work) workDone+=arr[i];
            else{
                numOfWorkers++;
                workDone = arr[i];
            }
        }
        return numOfWorkers;
    }
    long long minTime(int arr[], int n, int k)
    {
               long long int l = *max_element(arr,arr+n),h,sum = 0;
        for(int i=0;i<n;i++) sum+=arr[i];
        h = sum;
        int res = 0;
        while(l<=h){
            int mid = (l+h)>>1;
            int numOfWorkers = canPaint(arr,n,mid);
            if(numOfWorkers==k) res = mid,h = mid-1;
            else if(numOfWorkers>k) l = mid+1;
            else h = mid-1;
        }
        return l;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends