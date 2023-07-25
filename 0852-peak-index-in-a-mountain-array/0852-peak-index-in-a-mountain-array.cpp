class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0,h = arr.size(),n = arr.size();
        while(l<=h){
            int mid = (l+h)>>1;
            if(mid!=0&&mid<n-1&&arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid]<arr[mid+1]) l = mid+1;
            else  h = mid-1;
        }
        return -1;
    }
};