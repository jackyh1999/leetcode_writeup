int maxProductDifference(vector<int>& nums) {
	int size = nums.size();
	sort(nums.begin(), nums.end());
	return nums[size-1]*nums[size-2]-nums[0]*nums[1];
}