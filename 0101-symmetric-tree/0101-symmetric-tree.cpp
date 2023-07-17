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
    bool isMirror(TreeNode*lroot,TreeNode*rroot){
        if(lroot==NULL&&rroot==NULL) return true;
        if(!lroot||!rroot)  return  false;
        if((lroot->val!=rroot->val))  
            return false;
        return isMirror(lroot->left,rroot->right)&&isMirror(lroot->right,rroot->left);

    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return isMirror(root->left,root->right);
    }
};