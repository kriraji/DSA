/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL)
         return nullptr;
       ListNode* first=head;
       ListNode* second=head;
       while(second!=NULL && second->next!=NULL){
          first=first->next;
          second=second->next->next;
       }
       if(first->next==NULL){
        head->next=nullptr;
       }
       else{
       first->val=first->next->val;
       first->next=first->next->next;
       }
       return head;
    }
};