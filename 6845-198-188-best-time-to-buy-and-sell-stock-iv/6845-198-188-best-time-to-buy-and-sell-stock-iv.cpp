class Solution {
public:
  int k;
   int f(int idx,int transNo,vector<int>&arr,vector<vector<int>>&dp){
  
  if(idx==arr.size()|| transNo==2*k)
      return 0;
 if(dp[idx][transNo]!=-1)
     return dp[idx][transNo];
   int profit=0;
 if(transNo &1)
     profit=max(arr[idx]+ f(idx+1,transNo+1,arr, dp),
     0+f(idx+1, transNo,arr,dp)) ;
     
   else
    profit=max( -arr[idx]+ f(idx+1,transNo+1,arr, dp), 
    0+ f(idx+1,transNo , arr,dp)) ;
    
  return profit;
 }   
int maxProfit(int k, vector<int>&arr) {
         
   int n=arr.size() ;
   this->k=k;
  vector<vector<int>>dp=vector<vector<int>>(n+1, vector<int>(2*k+1,0));
// for(int i=0;i<=n;i++)
  //   dp[i][2*k]=0;
 for(int i=n-1;i>=0;i--){
   for(int transNo=2*k-1;transNo>=0;transNo--){
   int profit=0;
    if(transNo &1)
 
    profit=max(arr[i]+dp[i+1][transNo+1],
         0+dp[i+1][transNo]);
    else
      
    profit=max(-arr[i]+dp[i+1][transNo+1],
         0+dp[i+1][transNo]);
    
    dp[i][transNo]=profit;
   }
 }
    return dp[0][0];
    
//  return f(0,0,arr,dp) ;
   
        
    }
};