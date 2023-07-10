/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        bool flag = true;
        vector<vector<int>>res;
        if(!root) return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int width = q.size();
            vector<int>v(width);
             for(int i = 0;i<width;i++){
                    TreeNode* curr = q.front();
                    q.pop();
                    int idx = flag ? i : width-i-1;
                    v[idx] = curr->val;  
                    if(curr->left) q.push(curr->left);
                    if(curr->right) q.push(curr->right);
             }
             flag = !flag;
             res.push_back(v);
        }
        return res;
    }
};