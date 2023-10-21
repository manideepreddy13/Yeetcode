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
    void deleteNode(ListNode* node) {
        int dummy;
        dummy = node->val;
        node->val = node->next->val;
        node->next->val = dummy;
        ListNode *ptr;
        node->next = node->next->next;
    }
};