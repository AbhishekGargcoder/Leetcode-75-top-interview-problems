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
    vector<string>paths;
    void rootToLeaf(TreeNode*root,string s){
        if(root==NULL){
            return;
        }
        s = s + to_string(root->val) + "->";
        if(root->left==NULL&&root->right==NULL) {
            s = s.substr(0,s.length()-2);
            paths.push_back(s);
            return;
        }
        rootToLeaf(root->left,s);
        rootToLeaf(root->right,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s = "";
        if(!root) return {s};
        rootToLeaf(root,s);
        return paths;
    }
};