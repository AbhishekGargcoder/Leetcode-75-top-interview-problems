class Solution {
public:
 int x;
 vector<vector<int>>dp;
 int f(int idx,vector<int>&arr,int lar){
   if(idx==0){
       if(lar==x or arr[lar]>arr[0])
            return 1;
      return 0;
   }
 if(lar!=x&&dp[idx][lar]!=-1) return dp[idx][lar-1];
   int notTake =0, take=0;
   
   notTake=f(idx-1,arr, lar);
 if(lar==x or arr[lar]>arr[idx]){
     int temp=lar;
      lar=idx;
      take= 1+f(idx-1,arr, lar);
      lar= temp;
  }  
   return dp[idx][lar-1]= max(notTake, take);
  }
  
     
     

    int lengthOfLIS(vector<int>&arr) {
      int n=arr.size();
     dp=vector<vector<int>>(n,vector<int>(n+1, -1));
     vector<int>lis;
      x= n+1;
        return f(n-1,arr,n+1);
    }
};