/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
         ListNode* front= node->next;
     ListNode* mfront= node->next->next;
      node->val=front->val;
      node->next=mfront;
    }
};