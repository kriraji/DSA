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
    bool isValidBST(TreeNode* root) {
        inorder(root);
        int n=vec.size();
        for(int i=1;i<n;i++){
            if(vec[i]<=vec[i-1])
             return false;
        }
        return true;
    }
};