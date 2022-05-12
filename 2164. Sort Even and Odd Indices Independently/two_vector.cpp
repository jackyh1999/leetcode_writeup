vector<int> sortEvenOdd(vector<int>& nums) {
	vector<int> odd;
	vector<int> even;
	for(int i=0; i<nums.size(); i++) (i % 2 == 0) ? even.push_back(nums[i]) : odd.push_back(nums[i]);       
	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end(), greater<>());
	for(int i=0; i<nums.size(); i++) nums[i] = (i % 2 == 0) ? even[i/2] : odd[i/2];
	return nums;
}