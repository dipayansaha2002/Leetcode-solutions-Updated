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
    ListNode* middleNode(ListNode* head) {
        if(head == NULL) return head; //no middle for empty ll
        
        ListNode* slow = head, *fast = head;
        
        while( fast != NULL && fast->next != NULL){
            slow = slow->next; //slow moves by 1
            fast = fast->next->next; //fats moves by 2
        }
        return slow; //when fast reaches end, slow is at middle
    }
};