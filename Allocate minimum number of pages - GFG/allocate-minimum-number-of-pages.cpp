//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    int noOfStud(int arr[],int n,int pages){
        int pagesStudent = 0,stud = 1;
        for(int i =0;i<n;i++){
            if(pagesStudent+arr[i]<=pages){
                pagesStudent += arr[i];
            }
            else{
                stud++;
                pagesStudent = arr[i];
            }
        }
        return stud;
    }
    int findPages(int arr[], int n, int m) 
    {
        if(n<m) return -1;
        int l = *max_element(arr,arr+n),h,sum = 0;
        for(int i = 0;i<n;i++) sum+=arr[i];
        h = sum;
        while(l<=h){
            int mid  =(l + h)>>1;
            int stud = noOfStud(arr,n,mid);
            if(stud>m)
                l = mid+1;
            else h = mid-1;
        }
        return l;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends