//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i,j,k;
        vector<int>res;
        i = j = k = 0;
        while(i<n&&j<m){
            if(arr1[i]==arr2[j]){
                if(k==0) {k++;res.push_back(arr2[j]);}
                else if(arr1[i]!=res[k-1])
                    {k++;res.push_back(arr1[i]);}
                i++,j++;
            }
            else if(arr1[i]>arr2[j]){
                if(k==0){k++; res.push_back(arr2[j]);}
                else if(arr2[j]!=res[k-1])   
                    {k++;res.push_back(arr2[j]);}
                j++;
            }
            else if(arr1[i]<arr2[j]){
                if(k==0){ res.push_back(arr1[i]);k++;}
                else if(arr1[i]!=res[k-1])
                    {k++;res.push_back(arr1[i]);}
                i++;
            }
        }
        while(i<n){ 
            if(res[k-1]!=arr1[i])
                {res.push_back(arr1[i]);k++;}
            i++;
        }
        while(j<m){ 
            if(res[k-1]!=arr2[j]) 
            {res.push_back(arr2[j]);        k++;}
            j++;
        }
        return res;
        
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends