class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
      int n = arr.size();
       int l= 0,h= n-1;
        if(n==1) return arr[0];
       if(arr[0]!=arr[1]) return arr[0];
      if(arr[n-1]!=arr[n-2]) return arr[n-1];
    while(l<=h){
          int mid= l+(h-l)/2;
          if(arr[mid]!=arr[mid-1] and arr[mid]!=arr[mid+1])
              return arr[mid];
    if(mid&1){
       if(arr[mid]==arr[mid-1])
             l = mid+1;
         else   h =mid-1;
      }
     else{
       if(arr[mid]==arr[mid+1])
            l = mid+1;
       else h= mid-1;
    }
    
   }
           
   return -1;        
       
           
    }
};