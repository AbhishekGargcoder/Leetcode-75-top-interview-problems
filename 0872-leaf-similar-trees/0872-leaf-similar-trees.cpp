class Solution {
public:
    vector<int>tree1,tree2;
    void f(TreeNode*root,vector<int>&tree){
        if(!root) return;
        if(!root->left&&!root->right){
            tree.push_back(root->val); return;
        }
        f(root->left,tree);
        f(root->right,tree);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        f(root1,tree1);
        f(root2,tree2);
        for(int &e:tree1) cout<<e<<" ";cout<<endl;
        for(int &e:tree2) cout<<e<<" ";cout<<endl;
        return tree1==tree2;
    }
};

