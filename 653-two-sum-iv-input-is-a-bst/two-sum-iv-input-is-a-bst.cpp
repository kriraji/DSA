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
vector<int> vec;
    void inorder(TreeNode* node){
        if(node==nullptr)
         return;
        inorder(node->left);
        vec.push_back(node->val);
        inorder(node->right);
        return;
    }
    bool findTarget(TreeNode* root, int k) {
      inorder(root);
        int n=vec.size();
        int i=0,j=n-1;
        while(i<j){
            if(vec[i]+vec[j]==k)
             return true;
             else if(vec[i]+vec[j]<k)
              i++;
              else 
              j--;
        }
        return false;  
    }
};