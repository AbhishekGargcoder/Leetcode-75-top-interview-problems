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
        return max(lh,rh)+1;
    }
    int diam = -1;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
         diameterOfBinaryTree(root->left);
         int lh = h(root->left);
         int rh = h(root->right);
         diam = max(diam,lh+rh);
         diameterOfBinaryTree(root->right);
         return diam;
    }
};