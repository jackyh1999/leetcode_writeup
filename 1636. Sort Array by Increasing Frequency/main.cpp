vector<int> frequencySort(vector<int>& nums) {
	unordered_map<int, int> freq;
	for (int num : nums) freq[num]++;
	sort(begin(nums), end(nums), [&](int a, int b) { return freq[a] == freq[b] ? a > b : freq[a] < freq[b]; });
	return nums;
}