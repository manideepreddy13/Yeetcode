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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp1, *temp2;
        ListNode *ptr = NULL;

        temp1 = head;
        while(temp1 != NULL){
            temp2 = temp1->next;
            temp1->next = ptr;
            ptr = temp1;
            temp1 = temp2;
        }

        head = ptr;

        return head;
    }
};