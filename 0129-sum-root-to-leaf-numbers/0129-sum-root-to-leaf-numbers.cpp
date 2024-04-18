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
    int ans;
    void f(TreeNode*root,int num){
        if(root==NULL) return;
        if(!root->left&&!root->right){
            num = num*10 + root->val;
            ans+=num;
            return;
        }
        num = num*10 + root->val;
        f(root->left,num);
        f(root->right,num);
    }
    int sumNumbers(TreeNode* root) {
        ans =0;
        f(root,0);
        return ans;
    }
};
