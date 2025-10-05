/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
 void recursion(TreeNode* node,TreeNode* &m, vector<TreeNode*> &ans, vector<TreeNode*> &res){
     if(node==nullptr)
      return;
      res.push_back(node);
      if(node->val==m->val){
        ans.insert(ans.end(),res.begin(),res.end());
         return;
      }
      else{
        recursion(node->left,m,ans,res);
        recursion(node->right,m,ans,res);
      }
      res.pop_back();
 }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       vector<TreeNode*> ans1,ans2,res1,res2;
       recursion(root,p,ans1,res1);
       recursion(root,q,ans2,res2);
       int l1=ans1.size();
       int l2=ans2.size();
       int i = 0;
        while (i < ans1.size() && i < ans2.size() && ans1[i] == ans2[i])
            i++;
      return ans1[i-1];
    }
};