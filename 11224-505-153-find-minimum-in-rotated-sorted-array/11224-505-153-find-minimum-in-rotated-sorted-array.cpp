/*class Solution {
public:
    int findMin(vector<int>& nums) {
        
    }
};*/
class Solution {

public:

  int findMin(vector<int>&arr ){

       int n = arr.size();

        int l=0, h=n-1;

        int res = INT_MAX;

        while(l<=h){

           int mid= l + (h-l)/2;

           if(arr[l]<=arr[mid]){

               res = min(res,arr[l]);

             l = mid+1;

             }

             else{ res = min(res,arr[mid]);

              h = mid-1;

             }

        }  

            

      return res;

    

    

    }

    

};