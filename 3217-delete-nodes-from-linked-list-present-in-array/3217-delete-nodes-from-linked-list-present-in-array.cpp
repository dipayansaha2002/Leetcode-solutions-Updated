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
    ListNode* modifiedList(vector<int>& excludeValues, ListNode* head) {
        bitset<100001> excludeSet; 
        for (int val : excludeValues) {
            excludeSet.set(val);
        }
        
        ListNode dummy(0);
        dummy.next = head;
        ListNode* curr = &dummy;
        
        while (curr->next) {
            if (excludeSet[curr->next->val]) {
                curr->next = curr->next->next;  
            } else {
                curr = curr->next;  
            }
        }
        
        return dummy.next;
    }
};
