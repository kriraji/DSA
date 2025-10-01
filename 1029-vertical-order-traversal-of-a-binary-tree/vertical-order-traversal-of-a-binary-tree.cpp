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
        map<int,map<int,multiset<int>>> res;
        queue<pair<TreeNode*,pair<int,int>>> que;
        que.push({root,{0,0}});
        while(!que.empty()){
            auto p=que.front();
            que.pop();
            TreeNode* node= p.first;
            int x=p.second.first,y=p.second.second;
            res[x][y].insert(node->val);
            if(node->left)
            que.push({node->left,{x-1,y+1}});
            if(node->right)
            que.push({node->right,{x+1,y+1}});
        }
        vector<vector<int>> ans;
        for(auto p:res){
            vector<int> temp;
            for(auto q:p.second){
                temp.insert(temp.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};