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
        if (!head || !head->next || k == 0) return head;
        ListNode *fast = head, *slow = head;
        int len = 1;
        while (fast->next) fast = fast->next, len++; 
        k %= len;
        if (k == 0) return head;
        fast->next = head;
        for (int i = 0; i < len - k - 1; i++) slow = slow->next;
        head = slow->next;
        slow->next = nullptr;
        return head;
    }
};