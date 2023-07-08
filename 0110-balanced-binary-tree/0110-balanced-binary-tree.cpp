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
    int h(TreeNode*root){
        if(root==NULL) return 0;
        int lh = h(root->left);
        int rh = h(root->right);
        return max(rh,lh)+1;
    }
    int bf(TreeNode*root){
        if(root==NULL) return 0;
        return (h(root->left)-h(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        if(isBalanced(root->left)==false) return false;
        int balf = (bf(root)) ;
        if(balf>1||balf<-1) return false;
        return isBalanced(root->right);
        return true;
    }
};