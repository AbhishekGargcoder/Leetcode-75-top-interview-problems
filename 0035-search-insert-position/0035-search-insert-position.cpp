class Solution {
public:
    int searchInsert(vector<int>&arr,int key) {
        int l = 0,h = arr.size()-1,n = arr.size();
        while(l<=h){
            int mid = l + (h-l)/2;
            if(arr[mid]==key) return mid;
            else if(arr[mid]>key){
                if(mid-1>=0&&arr[mid-1]<key)  return mid;
                h = mid-1;
            }
            else{
                if(mid+1<n&&arr[mid+1]>key) return mid+1;
                l = mid+1;
            }
        }
        if(arr[0]>key) return 0;
        return n;
    }
};