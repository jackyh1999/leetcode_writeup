int minStartValue(vector<int>& nums) {
	int sum = 0, minSum = INT_MAX;
	for(auto& num : nums){
		sum += num;
		minSum = min(minSum, sum);
	}
	return minSum < 0 ? 1 - minSum : 1;
}