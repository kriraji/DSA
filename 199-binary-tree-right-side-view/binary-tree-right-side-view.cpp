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
    vector<int> rightSideView(TreeNode* root) {
         queue<pair<TreeNode*,int>> que;
        map<int,int> mpp;
        if(root) que.push({root,0});
        while(!que.empty()){
            auto p=que.front();
            que.pop();
            TreeNode* node=p.first;
            int x=p.second;
            if(node->left) que.push({node->left,x+1});
            if(node->right) que.push({node->right,x+1});
            mpp[x]=node->val;
        }
        vector<int> ans;
        for(const auto &p:mpp)
         ans.push_back(p.second);
         return ans;
    }
};