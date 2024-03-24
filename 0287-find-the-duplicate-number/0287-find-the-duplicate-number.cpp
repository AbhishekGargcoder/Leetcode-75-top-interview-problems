class Solution {
public:
    int findDuplicate(vector<int>&arr) {
        int n = arr.size();
        vector<int>isVisited(n+1,false);
        for(int &num : arr){
            if(isVisited[num]) return num;
            isVisited[num] = true;
        }
        return 0;
    }
};