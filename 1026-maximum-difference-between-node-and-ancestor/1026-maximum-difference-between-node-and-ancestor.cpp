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
    void f(TreeNode*root,int mx,int mn){
        if(!root) return;
        ans = max({ans,abs(root->val-mx),abs(root->val-mn)});
        mn = min(mn,root->val);
        mx = max(mx,root->val);
       f(root->left,mx,mn);
       f(root->right,mx,mn);
    }
    int maxAncestorDiff(TreeNode*root){
        this->ans = -1;
        if(root==NULL) return 0;
        int mn = root->val,mx = root->val;
        f(root,mx,mn);
        return ans;
    }
};