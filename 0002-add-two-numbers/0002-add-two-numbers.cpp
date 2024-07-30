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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(); //seperate node created
        ListNode* temp = dummy;
        int carry = 0;
        while( l1!= NULL || l2!= NULL || carry ){ //run until l1,l2 becomes null & carry->0
            int sum = 0;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
               sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;  //reinitialise carry
            ListNode* addedNode = new ListNode(sum%10); //created addedNode 
            temp->next = addedNode; //linked the creatednode with temp
            temp = temp->next; //temp++
        }
        return dummy->next;
    }
};