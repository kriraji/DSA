/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "";
      queue<TreeNode*> que;
      string ans="";
      que.push(root);
      while(!que.empty()){
        TreeNode* node=que.front();
        que.pop();
        if(node==nullptr)
         ans.append("$,");
         else
         ans.append(to_string(node->val)+",");
         if(node){
            que.push(node->left);
            que.push(node->right);
         }
      }  
      return ans; 
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
       if(data.size()==0)
         return nullptr;
         stringstream s(data);
         string res;
         getline(s,res,',');
         TreeNode* root= new TreeNode(stoi(res));
         queue<TreeNode*> q;
         q.push(root);
         while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            getline(s,res,',');
            if(res == "$")
             node->left=nullptr;
             else{
                TreeNode* leftnode= new TreeNode(stoi(res));
                node->left=leftnode;
                q.push(leftnode);
             }
             getline(s,res,',');
             if(res == "$")
              node->right=nullptr;
              else{
                TreeNode* rightnode=new TreeNode(stoi(res));
                node->right=rightnode;
                q.push(rightnode);
              }
         }
         return root;  
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));