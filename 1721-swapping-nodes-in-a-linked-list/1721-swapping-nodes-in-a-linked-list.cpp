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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *slow = head, *fast =head, *n1 = head;
        
        for(int i=0; i<k-1; i++){
            fast = fast->next;
            n1 = fast;
        }
        
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        int temp = n1->val;
        int ans = slow->val;
        n1->val = ans;
        slow->val = temp;
        return head;
    }
};