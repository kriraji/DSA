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
class BSTIterator {
public:
stack<TreeNode*> st;
 void inpushst(TreeNode* node){
    while(node!=nullptr){
        st.push(node);
        node=node->left;
    }
 }
    BSTIterator(TreeNode* root) {
       inpushst(root); 
    }
    
    int next() {
      TreeNode* node=st.top();
      st.pop();
      inpushst(node->right);
      return node->val;  
    }
    
    bool hasNext() {
      if(!st.empty())
       return true;
       return false;  
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */