BRUTE FORCE:
class Solution {
public:
ListNode* reverseList(ListNode* head) {
ListNode* temp = head;
stack<int> st;
while(temp != NULL){
st.push(temp->data);
temp = temp->next;
}
temp = head; //updated the temp pointer to head
while( temp != NULL ){
temp->data = st.top();
st.pop();
}
EFFICIENT:
return head;
}
};