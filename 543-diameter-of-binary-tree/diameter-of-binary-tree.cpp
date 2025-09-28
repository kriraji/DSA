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
int maxdim=0;
 int cntlen(TreeNode* node){
    if(node==nullptr)
     return 0;
      int left=cntlen(node->left);
        int right=cntlen(node->right);
        maxdim=max(maxdim, left+right);
     return 1+max(left,right);
 }
    int diameterOfBinaryTree(TreeNode* root) {
        cntlen(root);
     return maxdim;
    }
};