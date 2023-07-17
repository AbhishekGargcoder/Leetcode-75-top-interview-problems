class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<int>rightView;
        while(!q.empty()){
            int width = q.size();
            for(int i =0;i<width;i++){
                TreeNode*curr = q.front();q.pop();
                if(i==width-1&&curr) rightView.push_back(curr->val);
                if(curr&&curr->left) q.push(curr->left); 
                if(curr&&curr->right) q.push(curr->right);
            }
        }
        return rightView;
    }
};