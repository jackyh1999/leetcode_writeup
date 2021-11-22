vector<int> sortArrayByParity(vector<int>& nums) {
	vector<int> ans;
	int size = nums.size();
	for(int i=0;i<size;i++){
		if(nums[i] % 2 == 1) ans.push_back(nums[i]);
		else ans.insert(ans.begin(), nums[i]);
	}
	return ans;
}