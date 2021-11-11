int getDecimalValue(ListNode* head) {
	int ans = 0, mul = 1;
	ListNode* tmp = head;
	for(;tmp;tmp=tmp->next) mul*=2;
	for(;head;head=head->next){
		mul /= 2;
		ans += (head->val)*mul;
	}
	return ans;
}