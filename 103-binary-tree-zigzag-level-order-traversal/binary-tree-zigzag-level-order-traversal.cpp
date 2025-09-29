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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> que;
        vector<vector<int>> ans;
        if(root==nullptr)
         return ans;
        que.push(root);
        while(!que.empty()){
            int size=que.size();
            vector<int> res;
            for(int i=0;i<size;i++){
            TreeNode* node=que.front();
            que.pop();
            if(node->left!=nullptr)
             que.push(node->left);
             if(node->right!=nullptr)
             que.push(node->right);
             res.push_back(node->val);
            }
            ans.push_back(res);
        }
    int m=ans.size();
    for(int i=0;i<m;i++){
        if(i%2!=0){
            int n=ans[i].size();
            int p=0,q=n-1;
            while(p<q){
                int temp=ans[i][p];
                ans[i][p]=ans[i][q];
                ans[i][q]=temp;
                p++;
                q--;
            }
        }
    }
    return ans;
    }
};