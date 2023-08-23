//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	   pair<int,int>dir[8] = {{0,1},{1,0},{-1,0},{0,-1},{1,1},{-1,-1},{-1,1},{1,-1}};
	    pair<int,int>dir2[8] = {{0,1},{1,0},{-1,0},{0,-1},{1,1},{-1,-1},{-1,1},{1,-1}};
	   vector<pair<int,int>>dirs(8);
	   dirs.assign(dir,dir+8);
	  vector<vector<int>>lists;
	  int r = grid.size(),c= grid[0].size();
	  for(int i =0;i<r;i++){
	      for(int j = 0;j<c;j++){
	          if(word[0]==grid[i][j]){
	              for(int d= 0;d<8;d++){
	                  int v =i+ dirs[d].first,h =j+ dirs[d].second;
	                  int w = 0;
	                  string s = "" + word[0];
	                  for(w =1;w<word.size();w++){
	                      if(v<0 || h<0 || v>=r || h >=c) break;
	                      if(grid[v][h]!=word[w]) break;
	                      s = s + grid[v][h];
	                      v += dir[d].first,h += dir[d].second;
	                   //   cout<<s<<" "<<endl;;
	                   //   cout<<"v = "<<v<<" h = "<<h<<endl;
	                  }
	                  	                      
	                  if(w == word.size()){
                
	                      vector<int>r(2,0);
	                      r[0] = i;
	                      r[1] = j;
	                      lists.push_back(r);
	                      break;
	                  }
	              }
	          }
	      }
	  }
	   return lists;
	   //return {{}};
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends