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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head ->next == NULL)
            return head;      
        ListNode *temp = nullptr;
        ListNode *first = head;
        ListNode *second = head;
        while(second!=NULL && second->next!=NULL)
        {
            temp = first;
            first = first->next;         
            second = second ->next ->next;  
            
        }   
        temp -> next = NULL;          
        
        ListNode* l1 = sortList(head);    
        ListNode* l2 = sortList(first); 
        
        return mergelist(l1, l2);                 
    }
    ListNode* mergelist(ListNode *l1, ListNode *l2)
    {
        ListNode* newhead = new ListNode(0);
        ListNode* curr = newhead;
        
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val <= l2->val)
            {
                curr -> next = l1;
                l1 = l1 -> next;
            }
            else
            {
                curr -> next = l2;
                l2 = l2 -> next;
            }
        
        curr = curr ->next;
        
        }
        
        if(l1 != NULL)
        {
            curr -> next = l1;
            l1 = l1->next;
        }
        
        if(l2 != NULL)
        {
            curr -> next = l2;
            l2 = l2 ->next;
        }
        
        return newhead->next;
    }
};