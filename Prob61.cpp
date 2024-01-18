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
    int listLength(ListNode* head) {
        if (!head) return 0;
        return 1 + listLength(head->next);
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next) return head;
        int n = listLength(head);
        k %= n;
        ListNode*slow = head, *fast = head;
        while(k--) {
            fast = fast->next;
        }
        if (!fast) return head;
        while(fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
        fast->next = head;
        head = slow->next;
        slow->next = NULL;
        return head;
        
    }
};
