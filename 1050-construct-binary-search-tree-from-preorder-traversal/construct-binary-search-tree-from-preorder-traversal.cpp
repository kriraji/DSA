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
unordered_map<int,int>mpp;
TreeNode* cbst(vector<int>&inorder,int instart,int inend,
vector<int>&preorder,int prestart,int preend){
    if(instart>inend || prestart>preend)
      return nullptr;
      TreeNode* root=new TreeNode(preorder[prestart]);
    int inmid=mpp[preorder[prestart]];
    int lefttree=inmid-instart;
    root->left=cbst(inorder,instart,inmid-1,preorder,prestart+1,prestart+lefttree);
    root->right=cbst(inorder,inmid+1,inend,preorder,prestart+lefttree+1,preend);
  return root;  
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
     vector<int> inorder=preorder;
     sort(inorder.begin(),inorder.end());
     for(int i=0;i<inorder.size();i++){
        mpp[inorder[i]]=i;
     }
     TreeNode* root= cbst(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1);
     return root;
    }
};