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
int cnt=0;
void order(TreeNode* node){
    if(node==nullptr)
     return;
      cnt++;
     order(node->left);
     order(node->right);
 }
    int countNodes(TreeNode* root) {
 order(root);
        return cnt;
    }
};