class Solution {
public:
    int maxProfit(vector<int>&arr) {
    int cp=arr[0],sp=0,profit=0,n=arr.size();
 for(int i=1;i<n;i++){
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
      
        
    }
};