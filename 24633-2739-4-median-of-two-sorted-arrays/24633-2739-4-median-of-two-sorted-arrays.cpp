class Solution {
public:
    double findMedianSortedArrays(vector<int>&arr1, vector<int>&arr2) {
        int n1= arr1.size(),n2=arr2.size();
  if(n2<n1) return findMedianSortedArrays(arr2, arr1);
      int l=0, h= n1;
     while(l<=h){
        int cut1= (l+h)>>1;
        int cut2= (n1+n2+1)/2-cut1;
   int l1= (cut1==0)? INT_MIN: arr1[cut1-1];
   int l2=( cut2==0)? INT_MIN : arr2[cut2-1];
   int r1= (cut1==n1) ? INT_MAX : arr1[cut1];
   int r2 =( cut2==n2) ?INT_MAX : arr2[cut2];
   if(l1<=r2&&l2<=r1){
     if(((n1+n2)&1)==0)
          return (max(l1,l2)+min(r1, r2))/2.0;
     else return max(l1, l2);
       
   }
  else if(l1>r2) h= cut1-1;
  else l= cut1+1;
 }
    return 0.0;
         
        
    }
};