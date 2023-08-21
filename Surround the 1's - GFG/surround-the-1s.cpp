//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        int r = matrix.size(),c = matrix[0].size();
        pair<int,int>pos[8] = {{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,-1},{1,1}};
        vector<pair<int,int>>dir(8,{0,0});
        dir.assign(pos,pos+8);
        int res = 0;
        for(int i =0;i<r;i++){
            for(int j =0;j<c;j++){
                int count = 0;
                if(matrix[i][j]==0)continue;
                for(auto d : dir){
                    int ver =i+ d.first,hor = j+d.second;
                    if(ver >=r || ver <0 || hor >=c || hor <0) continue;
                    if(matrix[ver][hor]==0){
                        count++;
                    } 
                }
                // cout<<endl;
                if(count!=0 && (count&1)==0) {
                    // cout<<"calculate ";
                    res++;
                }
            }
        }
        return res;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends