int getDecimalValue(ListNode* head) {
	int ans = 0, bit = 0;
	vector<int> stack;
	for(;head;head=head->next) stack.push_back(head->val);   
	for(int i=stack.size()-1;i>=0;i--){
		ans += stack[i]*pow(2,bit);
		bit++;
	}
	return ans;
}