//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		  //  int count[26]={0};
		  //  queue<char>q;
		  //  string res = "";
		  //  for(int i =0;i<s.length();i++){
		  //      count[s[i]-97]++;
		  //      if(count[s[i]-97]==1){
		  //          q.push(s[i]);
		  //          res = res + q.front(); continue;
		  //      }
		  //      else{
		  //          while(!q.empty()){
		  //              if(count[q.front()-97]==1){
		  //                  res = res + q.front();
		  //                  break;
		  //              }
		  //              q.pop();
		  //          }
		  //          if(q.empty()){
		  //              res = res + '#';
		  //          }
		  //      }
		  //  }
		  //  return res;
		    string ans = ""; 
      ans += A[0];
      
      queue<char>q;
      q.push(A[0]);
     
      int arr[26] = {0};
      arr[A[0]-'a']++;
      
      for(int i=1;i<A.size();i++)
      {
          arr[A[i]-'a']++;
          if(arr[A[i]-'a'] == 1) q.push(A[i]);
         while(!q.empty() and arr[q.front()-'a'] != 1)
         {
              q.pop();
         }
        if(q.empty())
          ans += '#';
        else
          ans += q.front();
      }
      return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends