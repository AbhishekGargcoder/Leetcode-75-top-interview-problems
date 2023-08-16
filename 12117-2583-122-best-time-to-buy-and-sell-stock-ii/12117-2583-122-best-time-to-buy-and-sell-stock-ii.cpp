class Solution {
public:
    int maxProfit(vector<int>&arr) {
    int cp=arr[0],sp=arr[0],profit=0,n=arr.size();
/* for(int i=1;i<n;i++){
   if(arr[i]<cp){
       cp=arr[i];
   }
   else{
       sp=arr[i]-cp;
       profit +=sp;
       cp=arr[i];
   }
  }
     return profit;
      */
 int dp[n+1][2];
 dp[n][0]=dp[n][1]=0;
   for(int i=n-1;i>=0;i--){
    for(int buy=0;buy<=1;buy++){
       int profit=0;
      if(buy)
        profit=max(arr[i]+ dp[i+1][0],0+dp[i+1][1]);
      
      else
     profit=max(-arr[i]+dp[i+1][1],
         0+ dp[i+1][0]);
    dp[i][buy]=profit;
    }
  }
    return dp[0][0];
    }
};