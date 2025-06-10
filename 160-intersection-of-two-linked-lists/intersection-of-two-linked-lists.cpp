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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
         return nullptr;
         if(headA==headB)
          return headA;
        ListNode* t1=headA;
        ListNode* t2=headB;
        int m=0,n=0;
        while(t1!=NULL){
            m++;
             t1=t1->next;
        }
         while(t2!=NULL){
            n++;
             t2=t2->next;
        }

         t1=headA;
        t2=headB;
        if(m>n){
            for(int i=1;i<=(m-n);i++){
                 t1=t1->next;
            }
        }
        else if(n>m){
           for(int i=1;i<=(n-m);i++){
                 t2=t2->next;
            }  
        }
        while(t1!=NULL && t2!=NULL){
            if(t1==t2)
             return t1;
             t1=t1->next;
             t2=t2->next;
        }
    return nullptr;
        
    }
};