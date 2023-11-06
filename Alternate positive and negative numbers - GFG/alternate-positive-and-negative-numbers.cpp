//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void rearrange(int arr[], int n) {
        int ei=0,oi = 1;
        vector<int> pos,neg;
        vector<int>ans(n);
        for(int i = 0;i<n;i++){
            if(arr[i]>=0){
                //  ans[oi] = arr[i];
                 pos.push_back(arr[i]);
                //  oi+=2;
            }
            else{
                neg.push_back(arr[i]);
                // ans[ei] = arr[i];
                // ei+=2;
            }
        }
        
        
        // cout<<pos.size()<<" "<<neg.size()<<endl;
        int j1 = 0,j2 = 0,sign_req =true;
        for(int i = 0;i<n;i++){
            if(sign_req==true){
                if(j1==pos.size()){
                    // cout<<j1<<endl;
                    while(i<n)
                    ans[i++] = neg[j2++];
                    break;
                }
            }
            if(sign_req!=true){
                if(j2==neg.size()){
                    // cout<<j2<<endl;
                    while(i<n)
                    ans[i++] = pos[j1++];
                    break;
                }
            }
            if(sign_req){ans[i] = pos[j1++]; sign_req = !sign_req;}
            else{ans[i] =neg[j2++];sign_req = !sign_req;}
           
        } for(int i= 0 ;i<n;i++) arr[i] =ans[i];
	}
}; 

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends