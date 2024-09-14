class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL) return NULL;
        ListNode* l3 = new ListNode();
        ListNode* ans = l3;
        while(l1 != NULL && l2 != NULL){
            if(l1->val >= l2->val){
                l3->val = l2->val;
                l2 = l2->next;
            }
            else{
                l3->val = l1->val;
                l1 = l1->next;
            }
            ListNode* node = new ListNode();
            l3->next = node;
            l3 = l3->next;
        }
        while(l1 != NULL){
            l3->val = l1->val;
            l1 = l1->next;
            if(l1 != NULL){
                ListNode* node = new ListNode();
                l3->next = node;
                l3 = l3->next;
            }
        }
        while(l2 != NULL){
            l3->val = l2->val;
            l2 = l2->next;
            if(l2 != NULL){
                ListNode* node = new ListNode();
                l3->next = node;
                l3 = l3->next;
            }   
        }
        return ans;
    }
};