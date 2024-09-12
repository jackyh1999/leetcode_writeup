int numJewelsInStones(string jewels, string stones) {
	int ans = 0;
	unordered_set<char> myset;
	for(auto jewel: jewels) myset.insert(jewel);
	for(auto stone: stones) {
		if(myset.count(stone)) ans++;
	}
	return ans;
}