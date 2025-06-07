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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* oddum= new ListNode(INT_MIN);
        ListNode* odd=oddum;
        ListNode* evendum=new ListNode(INT_MIN);
        ListNode* even=evendum;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            if(cnt%2!=0){
                odd->next=temp;
                odd=odd->next;
            }
          else{
            even->next=temp;
            even=even->next;
          }
          temp=temp->next;
        }
        odd->next=evendum->next;
        even->next=nullptr;
        return oddum->next;
    }
};