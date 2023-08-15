class Solution {
public:
int maxProfit(vector<int>&arr) {
   int profit=0,min=arr[0];
   int n =arr.size();
    for(int i=1;i<n;i++){
      if(arr[i]<min){
          min=arr[i];
      }
      else
          profit = max(profit,arr[i]-min);
  }         
        
       
      
           
        
    
    return profit;
    }
};