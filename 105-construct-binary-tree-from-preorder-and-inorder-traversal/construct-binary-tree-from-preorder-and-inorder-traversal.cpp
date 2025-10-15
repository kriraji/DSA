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
 map<int,int> mpp;
 TreeNode* makeTree(vector<int>& preorder,int prestart,int preend,vector<int>& inorder,int instart,int inend){
    if(prestart>preend || instart>inend)
      return nullptr;
    TreeNode* root=new TreeNode(preorder[prestart]);
    int inroot_index=mpp[root->val];
    int treeleft=inroot_index-instart;
    root->left=makeTree(preorder,prestart+1,prestart+treeleft,inorder,instart,inroot_index-1);
    root->right=makeTree(preorder,prestart+treeleft+1,preend,inorder,inroot_index+1,inend);
    return root;
 }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++)
         mpp[inorder[i]]=i;
        TreeNode* root= makeTree(preorder, 0,preorder.size()-1, inorder,0,inorder.size()-1);
        return root;
    }
};