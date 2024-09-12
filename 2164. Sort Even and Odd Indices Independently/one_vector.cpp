vector<int> sortEvenOdd(vector<int>& nums) {
	vector<int> vec;
	for(int i=0; i<nums.size(); i+=2) vec.push_back(nums[i]);      
	sort(vec.begin(), vec.end());
	for(int i=0; i<nums.size(); i+=2) nums[i] = vec[i/2];
	vec.clear();
	for(int i=1; i<nums.size(); i+=2) vec.push_back(nums[i]);      
	sort(vec.begin(), vec.end(), greater<>());
	for(int i=1; i<nums.size(); i+=2) nums[i] = vec[i/2];
	return nums;
}