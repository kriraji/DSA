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
void postorder(TreeNode* node){
    if(node==nullptr)
     return;
     postorder(node->left);
     postorder(node->right);
     cnt++;
 }
    int countNodes(TreeNode* root) {
 postorder(root);
        return cnt;
    }
};