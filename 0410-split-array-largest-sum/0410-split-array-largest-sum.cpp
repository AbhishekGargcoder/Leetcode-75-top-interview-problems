class Solution {
public:
    int canPaint(vector<int>&arr,int n,int work){
        int numOfWorkers = 1,workDone = 0;
        for(int i = 0;i<n;i++){
            if(workDone+arr[i]<=work) workDone+=arr[i];
            else{
                numOfWorkers++;
                workDone = arr[i];
            }
        }
        return numOfWorkers;
    }
    int splitArray(vector<int>&arr, int k) {
        int l = *max_element(arr.begin(),arr.end()),h,sum = 0,n = arr.size();
        for(int i=0;i<n;i++) sum+=arr[i];
        h = sum;
        int res = 0;
        while(l<=h){
            int mid = (l+h)>>1;
            int numOfWorkers = canPaint(arr,n,mid);
            if(numOfWorkers==k) res = mid,h = mid-1;
            else if(numOfWorkers>k) l = mid+1;
            else h = mid-1;
        }
        return l;

    }
};