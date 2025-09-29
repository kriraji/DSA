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
 int maxpath=INT_MIN;
  int pathfind(TreeNode* root){
    if(root==nullptr)
        return 0;
        int leftpath=max(0,pathfind(root->left));
        int rightpath=max(0,pathfind(root->right));
        maxpath=max(maxpath,root->val+leftpath+rightpath);
        return  root->val+max(leftpath,rightpath);
  }
    int maxPathSum(TreeNode* root) {
      pathfind(root); 
      return maxpath;
    }
};