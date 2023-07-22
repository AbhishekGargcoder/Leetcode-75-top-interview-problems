class Solution {
public:
    int solve(vector<int>&weights,int x,int days){
        int sum = 0,count = 1,flag = 0;
        for(int i =0;i<weights.size();i++){
            if(sum+weights[i]<=x)
                sum+=weights[i];
            else{
                cout<<sum<<" ";
                sum = weights[i], count++;
            }
        }
        return count;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(),weights.end()),h,sum = 0,res = INT_MAX;
        for(int i =0;i<weights.size();i++)sum+=weights[i];
        h = sum;
        while(l<=h){
            int mid = l + (h-l)/2;
            int time = solve(weights,mid,days);
            // cout<<mid<<" ";
            if(time <=days){res = mid,h = mid-1;}
            else l = mid+1;;
        }
        return l;
    }
};