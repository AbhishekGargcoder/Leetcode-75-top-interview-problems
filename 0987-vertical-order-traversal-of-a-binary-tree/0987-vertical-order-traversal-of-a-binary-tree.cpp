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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto n = q.front();q.pop();
            TreeNode*curr = n.first;
            int y = n.second.first;
            int x = n.second.second;
            nodes[y][x].insert(curr->val);
            if(curr->left) q.push({curr->left,{y-1,x+1}});
            if(curr->right) q.push({curr->right,{y+1,x+1}});
        }
        vector<vector<int>>res;
        for(auto v : nodes){
            vector<int>temp;
            for(auto n : v.second ){
              temp.insert(temp.end(),n.second.begin(),n.second.end());
            }
            res.push_back(temp);
        }
        return res;
    }
};