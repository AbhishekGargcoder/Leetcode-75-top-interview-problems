//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // vector<int>arr(n);
        // fill(arr.begin(),arr.end(),a);
        // arr.assign(a,a+n);
        //  int n =arr.size();
        int l= -1,h = n;
        for(int i = 0;i<h&&l<h;){
            if(arr[i]==1){
                i++;
            }
            else if(arr[i]==2){
                swap(arr[i],arr[--h]);
            }
            else{
                swap(arr[i],arr[++l]);i++;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends