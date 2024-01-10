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
    vector<vector<int>>adj;
    unordered_map<int,TreeNode*>parents;
    TreeNode* head = NULL;
    int start;
    void findParent(TreeNode*root,TreeNode*prev){
        if(!root) return;
        if(root->val==start) head = root;
        findParent(root->left,root);
        findParent(root->right,root);
        if(prev!=NULL){
            parents[root->val] = prev;
        }else{
            parents[root->val] = NULL;
        }
    }
    int adjacents(TreeNode*root){
        queue<TreeNode*>q;
        q.push(head);
        int lvl = 0;
        unordered_map<int,bool>vis;
        vis[head->val] = true;
        while(q.size()){
            int sz = q.size();
            lvl++;
            for(int i = 0; i < sz;i++){
                TreeNode*curr = q.front();
                TreeNode*par = parents[curr->val];
                TreeNode*left = curr->left,*right = curr->right;
                q.pop();
                
                if(par&&vis.count(par->val)==0){
                  q.push(par); 
                    vis[par->val] = true;
                }
                if(left&&vis.count(left->val)==0){
                    q.push(left);
                    vis[left->val] = true;
                }   
                if(right&&vis.count(right->val)==0){
                    q.push(right);
                    vis[right->val] = true;
                }    
            }
        }
         return lvl-1;
    }
    int amountOfTime(TreeNode* root, int start) {
        this->start = start;
        findParent(root,NULL);     
        return adjacents(root);
        for(auto p:parents){
            if(p.second)
            cout<<p.first<<" "<<p.second->val<<endl;
        }
        return 0;
    }
};
