int numJewelsInStones(string jewels, string stones) {
	int ans = 0;
	set<char> myset;
	for(int i=0;i<jewels.length();i++) myset.insert(jewels[i]);
	for(int i=0;i<stones.length();i++) {
		if(myset.count(stones[i]) != 0) ans++;
	}
	return ans;
}