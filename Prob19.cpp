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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head, *delPos = head;
        if (temp -> next == NULL && n == 1) return NULL;
        while (n) {
            temp = temp->next;
            n--;
        }
        if (!temp) return head->next;
        while (temp->next) {
            temp = temp->next;
            delPos = delPos->next;
        }
        delPos->next = delPos->next->next;
        return head;
    }
};
