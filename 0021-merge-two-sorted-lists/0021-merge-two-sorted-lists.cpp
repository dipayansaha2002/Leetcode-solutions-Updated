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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy, *temp; //temp will traverse, dummy will stay at head
        dummy = new ListNode();
        temp = dummy;
        
        while(list1 && list2){
            if(list1->val <= list2->val){ //if list1 val <= list2 val
                temp->next = list1; //temp's next becomes the list 
                list1 = list1->next; //list becomes list next
            }
            else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;//move ahead the temp for next node
        }
        if(list1){
            temp->next = list1;//if only list1 exists then update temp->next
            temp = temp->next;
        }
        if(list2){
            temp->next = list2;//if only list2 exists then update temp->next
            temp = temp->next;
        }
        return dummy->next;//return from the next of the dummy
    }
};