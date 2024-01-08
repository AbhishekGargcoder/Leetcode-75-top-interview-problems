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
    int f(TreeNode* root,int l,int h){
        int sum = 0 ;
        if(root==NULL) return 0 ;
        if(root->val>=l&&root->val<=h){
            sum =root->val + f(root->left,l,h) + f(root->right,l,h);
        }
        else if(root->val<l) sum = f(root->right,l,h);
        else if(root->val>h) sum = f(root->left,l,h);
        return sum;
    }
    int rangeSumBST(TreeNode* root, int l, int h) {
        return f(root,l,h);
    }
};