class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int ans = 0,n = heights.size();
        vector<int>diff(n-1);
        for(int i = 1; i < n ; i ++){
            diff[i-1] = heights[i] - heights[i-1];
        }
        priority_queue<int>pq;
        int i;
        for(i = 0;i < n - 1;i++){
            cout<<diff[i]<<" ";
            if(diff[i]<=0) continue;
            pq.push(diff[i]);
            if(bricks-diff[i]>=0){
                bricks-=diff[i];
            }
            else{
                int prevLargestBrickUsed = pq.top();
                pq.pop();
                bricks+=prevLargestBrickUsed;
                ladders--;
                bricks-=diff[i];
            }
            if(ladders<0) return i;
        }
        return i;
    }
};