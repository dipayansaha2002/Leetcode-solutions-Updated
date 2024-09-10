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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* current = head;

        while (current != nullptr && current->next != nullptr) {
            int gcdValue = __gcd(current->val, current->next->val);

            ListNode* newNode = new ListNode(gcdValue);
            newNode->next = current->next;
            current->next = newNode;

            current = current->next->next;
        }

        return head;
    }
};
