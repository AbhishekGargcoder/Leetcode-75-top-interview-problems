class Solution {
public:
    int firstOccur(vector<int>&arr,int key){
        int l = 0,h  = arr.size()-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(arr[mid]<key) l = mid+1;
            else if(arr[mid]>key) h = mid-1;
            else{
                if(mid-1>=0&&arr[mid-1]!=key) return mid;
                if(mid==0)  return mid;
                h  = mid-1;
            }
         }
        return -1;
    }
    int lastOccur(vector<int>&arr,int key){
        int l = 0,h  = arr.size()-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(arr[mid]<key) l = mid+1;
            else if(arr[mid]>key) h = mid-1;
            else{
                                cout<<mid<<" ";

                if((mid+1<arr.size())&&arr[mid+1]!=key) return mid;
                if(mid==arr.size()-1)  return mid;
                l = mid+1;
            }
         }
        return -1;
    }
    vector<int> searchRange(vector<int>&arr, int key) {
        vector<int>res(2);
        res[0] = firstOccur(arr,key);
        res[1] = lastOccur(arr,key);
        return res;
    }
};