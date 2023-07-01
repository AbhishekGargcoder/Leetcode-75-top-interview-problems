class Solution {
public:
    int removeDuplicates(vector<int>&arr) {
        int dups = arr[0];
        int k = 1,n = arr.size(),idx = 1;
        for(int i =1;i<n;i++){
            if(arr[i]==dups){
                if(idx==-1)
                    idx = i;
            }
            else{
                k++;
                arr[idx] = arr[i];
                idx++;
                dups = arr[i];
            }
        }
        return k;
    }
};