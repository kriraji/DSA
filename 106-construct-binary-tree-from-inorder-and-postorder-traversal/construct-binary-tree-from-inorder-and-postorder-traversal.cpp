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
TreeNode* ubt(vector<int>& postorder,int pstart,int pend, vector<int>& inorder,int instart,int inend){
    if(pstart>pend || instart>inend)
      return nullptr;
    TreeNode* root=new TreeNode(postorder[pend]);
    int inroot=mpp[root->val];
    int numsleft=inroot-instart;
    root->left=ubt(postorder,pstart,pstart+numsleft-1,inorder,instart,inroot-1);
    root->right=ubt(postorder,pstart+numsleft,pend-1,inorder,inroot+1,inend);
    return root;
}
unordered_map<int,int> mpp;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       for(int i=0;i<inorder.size();i++)
         mpp[inorder[i]]=i; 
   TreeNode* root= ubt(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1);
   return root;
    }
};