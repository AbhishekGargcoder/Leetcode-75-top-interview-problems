class Solution {
public:
    TreeNode* findPath(TreeNode*root,TreeNode*n1,TreeNode*n2){
        if(root==NULL)  return NULL;
        if(root==n1||root==n2)    return root;
        TreeNode* left = findPath(root->left,n1,n2);
        TreeNode* right = findPath(root->right,n1,n2);
        if(left ==NULL) return right;
        if(right==NULL) return left;
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return {};
       return  findPath(root,p,q);
    }
};
