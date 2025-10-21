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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* head=root;
        if(!root){
            TreeNode* node= new TreeNode(val);
            return node;
        }
        TreeNode* temp;
       while(root!=nullptr){
        if(root->val <val){
            temp=root;
         root=root->right;
       }
       else{
        temp=root;
        root=root->left;
       }
       }
       TreeNode* node=new TreeNode(val);
       if(temp->val<val){
        temp->right=node;
       }
       else
       temp->left=node;
       return head;
    }
};