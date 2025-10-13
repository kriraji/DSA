/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
void parent(TreeNode* root,unordered_map<TreeNode* ,TreeNode*>&mpp){
    queue<TreeNode*> que;
    que.push(root);
    while(!que.empty()){
        TreeNode* node=que.front();
        que.pop();
        if(node->left){
            que.push(node->left);
            mpp[node->left]=node;
        }
        if(node->right){
            que.push(node->right);
            mpp[node->right]=node;
        }
    }
}
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
         unordered_map<TreeNode*,TreeNode*>mpp;
        parent(root,mpp);
        int dist=0;
        queue<TreeNode*> que;
        unordered_map<TreeNode*,bool>visited;
        que.push(target);
        visited[target]=true;
        while(!que.empty()){
            int size=que.size();
            if(dist++ ==k)
              break;
            for(int i=0;i<size;i++){
                TreeNode* temp=que.front();
                que.pop();
                if(temp->left &&!visited[temp->left]){
                   que.push(temp->left);
                   visited[temp->left]=true;
                }
                if(temp->right &&!visited[temp->right]){
                   que.push(temp->right);
                   visited[temp->right]=true;
                }
                if(mpp[temp]&&!visited[mpp[temp]]){
                    que.push(mpp[temp]);
                    visited[mpp[temp]]=true;
                }

            }
        }
        vector<int> ans;
        while(!que.empty()){
            TreeNode* cur=que.front();
            que.pop();
            ans.push_back(cur->val);
        }
        return ans;
    }
};