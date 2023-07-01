//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int arr[],int n){
        int dups = arr[0];
        int k = 1,idx = 1;
        for(int i =1;i<n;i++){
            if(arr[i]==dups){
                if(idx==-1)
                    idx = i;
            }
            else{
                k++;
                arr[idx] = arr[i];
                idx++;
                dups = arr[i];
            }
        }
        return k;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends