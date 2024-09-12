int repeatedNTimes(vector<int>& nums) {
	unordered_set<int> myset;
	for(int i=0;i<nums.size();i++){
		if(myset.count(nums[i]) == 0) myset.insert(nums[i]);
		else return nums[i];
	}
	return -1;
}