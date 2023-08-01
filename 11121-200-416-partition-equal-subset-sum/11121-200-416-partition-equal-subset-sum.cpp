class Solution {
public:
  vector<vector<int>>dp;
 bool f(vector<int>&arr,int i,int k){
     if(k==0) return true;
     if(i==0) return arr[i]==k;
 bool take=false, notTake=false;

if(dp[i][k]!=-1)return dp[i][k];
     if(k>=arr[i])
     take= f(arr,i-1,k-arr[i]);

     notTake= f(arr,i-1,k);
     return dp[i][k]=(take |
notTake) ;
     
}
    bool canPartition(vector<int>&arr){
 // int sum=
       int  sum=accumulate(arr.begin(),arr.end(),sum);
        cout<<sum;
      if(sum&1)return false;
 int n= arr.size();
 dp=vector<vector<int>>(n,vector<int>(sum/2+1,-1));
 return f(arr,n-1,sum/2);
    }
};