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
        ListNode* temp = head; //temp at head
        ListNode* prev = NULL; //prev before temp
        
        while(temp != NULL){
            ListNode* front = temp->next; //front after temp
            temp->next = prev; //Interchange the (temp->front) to (temp->prev)
            prev = temp; //Update the prev to temp(move ahead)
            temp = front;//Update the temp to front(move ahead)
        }
        return prev;//Return prev as atlast prev will go till end
    }
};