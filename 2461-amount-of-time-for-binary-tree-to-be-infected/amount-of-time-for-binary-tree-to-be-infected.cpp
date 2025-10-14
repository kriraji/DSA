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
 TreeNode* temp;
    void parent(TreeNode* root, unordered_map<TreeNode*,TreeNode*>&mpp,int start){
        queue<TreeNode*>que;
        if(!root)
         return;
         que.push(root);
         while(!que.empty()){
            TreeNode* node=que.front();
            que.pop();
            if(node->val==start)
               temp=node;
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
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*,TreeNode*>mpp;
            parent(root,mpp,start);
            int time=0;
            queue<TreeNode*>que;
            unordered_map<TreeNode*,bool>visited;
            que.push(temp);
            visited[temp]=true;
            while(!que.empty()){
                int size=que.size();
                bool burned=false;
                for(int i=0;i<size;i++){
                   TreeNode* node=que.front();
                    que.pop();
                    if(node->left &&!visited[node->left]){
                        que.push(node->left);
                        visited[node->left]=true;
                        burned=true;
                    }
                    if(node->right &&!visited[node->right]){
                        que.push(node->right);
                        visited[node->right]=true;
                        burned=true;
                    }
                    if(mpp[node]&&!visited[mpp[node]]){
                        que.push(mpp[node]);
                        visited[mpp[node]]=true;
                        burned=true;
                    }
                }
                if(burned)
                time++;
            }

        return time; 
    }
};