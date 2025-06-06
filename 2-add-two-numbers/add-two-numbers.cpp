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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* t1=l1;
       ListNode* t2=l2;
       ListNode* dummy=new ListNode(-1);
       ListNode* mover=dummy;
       int sum,car=0;
       while(t1!=NULL && t2!=NULL){
            sum=(t1->val+t2->val+car);
              car=sum/10;
              mover->next=new ListNode(sum%10);
              mover=mover->next;
              sum=0;
              t1=t1->next;
              t2=t2->next;
       } 
      while(t1!=NULL){
         sum=(t1->val+car);
              car=sum/10;
              mover->next=new ListNode(sum % 10);
                sum=0;
              mover=mover->next;
              t1=t1->next;
      }
       while(t2!=NULL){
         sum=(t2->val+car);
              car=sum/10;
              mover->next=new ListNode(sum % 10);
                sum=0;
              mover=mover->next;
              t2=t2->next;
      }
      if(car){
       mover->next=new ListNode(car);
       mover=mover->next;
      }
    return dummy->next;
    }
};