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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
          return nullptr;
        ListNode* cur=head;
          ListNode* prev=nullptr;
        while(cur!=NULL){
            if(cur->val==val){
                if(prev==nullptr){
                    head=cur->next;
                }
                else{
             prev->next=cur->next;
                }
                cur=cur->next;
            }
            else{
            prev=cur;
            cur=cur->next;
            }  
        }
        return head;
    }
};