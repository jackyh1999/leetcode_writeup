vector<int> minSubsequence(vector<int>& nums) {
	vector<int> ans;
	int sum = 0, subseq = 0;
	for(auto& num: nums) sum += num;
	sort(nums.begin(), nums.end());
	for(int i=nums.size()-1; i>=0; i--){
		sum -= nums[i];
		subseq += nums[i];
		ans.push_back(nums[i]);
		if(subseq > sum) break;
	}
	return ans;
}