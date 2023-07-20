class Solution {
public:
    int search(vector<int>&arr,int key) {
        int l = 0,n = arr.size(),h = n-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(arr[mid]==key) return mid;
            if(arr[l]<=arr[mid]){
                if(key<=arr[mid]&&key>=arr[l])
                    h = mid-1;
                else l = mid+1;
            }
            else{
                if(mid+1<n&&arr[mid+1]<=key&&key<=arr[h])
                    l =  mid + 1;
                else h = mid-1;
                
            }
            // else if(arr[mid]>key){
            //     if(arr[l]>key)  l  = mid+1;
            //     else h = mid-1;
            // }
            // else{
            //     if(mid+1<n&&arr[mid+1]<=key) l = mid-1;
            //     else if(arr[h]<key) h = mid-1;
            //     else l = mid+1;
            // }
        }
        return -1;
    }
};