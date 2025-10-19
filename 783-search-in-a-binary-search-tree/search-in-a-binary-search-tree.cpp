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
TreeNode* node;
 void searchbst(TreeNode* root, int data){
    if(root==nullptr)
     return;
     if(root->val==data){
        node=root;
        return;
     }
     else if(root->val<data)
      searchbst(root->right,data);
      else
      searchbst(root->left,data);
 }
    TreeNode* searchBST(TreeNode* root, int val) {
        searchbst(root,val);
        return node;
    }
};