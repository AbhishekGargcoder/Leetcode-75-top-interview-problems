class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top,down,left,right,r = matrix.size(),c = matrix[0].size();
        top = 0,down = r-1,left = 0,right= c-1;
        vector<int>ans;
        while(left<=right && top<=down){
            for(int i = left;i<=right;i++){
                cout<<matrix[top][i]<<" ";
                ans.push_back(matrix[top][i]);
            }
            cout<<endl;
            top++;
            if(top>down) return ans;
            for(int i = top;i<=down;i++){
                cout<<matrix[i][right]<<" ";                     
                ans.push_back(matrix[i][right]);
        }  cout<<endl;
            right--;
            for(int i = right;i>=left;i--){
            cout<<matrix[down][i]<<" ";

            ans.push_back(matrix[down][i]);
        }            cout<<endl;
            down--;
            if(left>right) return ans;
            for(int i = down;i>=top;i--){
                cout<<matrix[i][left]<<" ";
            ans.push_back(matrix[i][left]);
        }cout<<endl;
            left++;
        }
        return ans;
    }
};