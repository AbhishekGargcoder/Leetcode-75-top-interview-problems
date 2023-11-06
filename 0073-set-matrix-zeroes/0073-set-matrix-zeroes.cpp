class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size(),c = matrix[0].size();
        unordered_set<int>row,col;
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto x : row){
            int rowNum = x;
            for(int j = 0;j<c;j++){
                matrix[rowNum][j] = 0;
            }
        }
         for(auto x:col){
            int colNum = x;
            for(int j = 0;j<r;j++){
                matrix[j][colNum] = 0;
            }
        }
    }
};