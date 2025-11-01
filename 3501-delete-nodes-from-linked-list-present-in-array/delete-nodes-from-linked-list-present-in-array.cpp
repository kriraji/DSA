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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
   ListNode* dummy=new ListNode(-1);
   ListNode* temp=head;
   ListNode* res=dummy;
   unordered_set<int> st;
   for(int x:nums)
     st.insert(x);
    while(temp!=nullptr){
        int x=temp->val;
        if(st.find(x)==st.end()){
            res->next=temp;
            res=res->next;
        }
        temp=temp->next;
    }
    res->next=nullptr;
    return dummy->next;  
    }
};