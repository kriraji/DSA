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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
         return nullptr;
        vector<TreeNode*> vecp;
        vector<TreeNode*> vecq;
        TreeNode* pcur=root;
        while(pcur!=p){
            vecp.push_back(pcur);
            if(pcur->val > p->val)
             pcur=pcur->left;
             else
             pcur=pcur->right;
        }
        vecp.push_back(pcur);
         TreeNode* qcur=root;
        while(qcur!=q){
            vecq.push_back(qcur);
            if(qcur->val > q->val)
             qcur=qcur->left;
             else
             qcur=qcur->right;
        }
        vecq.push_back(qcur);
         int i=0;
         while(i<vecp.size()&& i<vecq.size()&&vecp[i]==vecq[i]){
            i++;

         }
         return vecp[i-1];
    }
};