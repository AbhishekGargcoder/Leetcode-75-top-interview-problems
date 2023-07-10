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
int res = INT_MIN;
    int maxPs(TreeNode*root){
       if(root==NULL) return 0;
       int leftGain = max(maxPs(root->left),0);
       int rightGain = max(maxPs(root->right),0);
       res = max(leftGain + rightGain+root->val,res);
       return max(leftGain,rightGain)+root->val;
    }
    int maxPathSum(TreeNode* root) {
     maxPs(root);
     return res==INT_MIN?0:res ;   
    }
};