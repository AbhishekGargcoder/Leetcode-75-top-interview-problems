class Solution {
public:
    void rev(vector<int>&arr,int l,int h){
        while(l<h){
            swap(arr[l++],arr[h--]);
        }
    }
    void rotate(vector<int>&arr, int k) {
        int n = arr.size();
        k = k%n;
        // [4,3,2,1,7,6,5]--> [5,6,7,2,3,4]
        rev(arr,0,n-1-k);
        rev(arr,n-k,n-1);
        rev(arr,0,n-1);
    }
};