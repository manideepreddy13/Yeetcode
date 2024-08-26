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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return NULL;
        }

        ListNode *slow, *fast;
        slow = head;
        fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                fast = head;
                break;
            }
        }

        if(!(fast != NULL && fast->next != NULL)){
            return NULL;
        }

        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }

        return slow;

    }
};