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
        if(head == NULL) return head;
        
        ListNode *temp = head;
        int cnt = 0;
        
        while(temp != NULL){
            cnt++; //count the length of the LL
            temp = temp->next;
        }
        
        //Edge case if cnt = n, remove head as deletion is from end
        if(cnt == n){
            ListNode *newHead = head->next;
            delete(head);
            return newHead;
        }
        
        int res = (cnt - n);
        temp = head;
        
        while(temp != NULL){
            res--;
            if(res==0){
                break;
            }
            temp = temp->next;
        }
        
        ListNode *DeleteNode = temp->next;
        temp->next = temp->next->next;
        delete(DeleteNode);
        
        return head;
    }
};