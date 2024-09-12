vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
	vector<int> target;
	vector<int>::iterator it;
	for(int i=0;i<nums.size();i++){
		it = target.begin();
		target.insert(it+index[i], nums[i]);
	}
	return target;
}