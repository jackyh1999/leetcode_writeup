int sumOfUnique(vector<int>& nums) {
	int cnt[101] = {}, ans = 0;
	for (auto n : nums) ans += ++cnt[n] == 1 ? n : cnt[n] == 2 ? - n : 0;
	return ans;
}