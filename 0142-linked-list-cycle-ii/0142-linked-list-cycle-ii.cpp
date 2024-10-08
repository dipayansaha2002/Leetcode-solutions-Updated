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
        ListNode *fast = head, *slow = head;
        if(head == NULL || head->next == NULL) return NULL;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){ //cycle detected
               slow = head;
               while(slow != fast){
                   slow = slow->next;
                   fast = fast->next; 
               }
                return slow;
            }
        }
        return NULL;
    }
};