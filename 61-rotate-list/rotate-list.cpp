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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0)
          return head;
        ListNode* temp=head;
        ListNode* cur=head;
        ListNode* prev;
        int n=1;
        while(temp->next!=NULL){
            n++;
            temp=temp->next;
        }
        if(k==n)
          return head;
        if(n>k){
            for(int i=1;i<((n-k)+1);i++){
                prev=cur;
              cur=cur->next;
            }         
        }
        else if(k>n){
            int left=k-n;
            if(left==n)
              return head;
            while(left>=n){
                if(left==n)
                return head;
                left=left-n;
            }
            for(int i=1;i<((n-left)+1);i++){
                prev=cur;
                cur=cur->next;
            }
        }
        temp->next=head;
        prev->next=nullptr;
        return cur;
    }
};