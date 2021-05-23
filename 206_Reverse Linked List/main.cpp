class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* middle = NULL;
        ListNode* trail = new ListNode();
        while(head){
            trail = middle;
            middle = head;
            head = head->next;
            middle->next = trail;
        }
        return middle;
    }
};