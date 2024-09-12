int countWords(vector<string>& words1, vector<string>& words2) {
	int ans = 0;
	unordered_map<string, int> map1;
	unordered_map<string, int> map2;
	unordered_set<string> myset;
	for(auto& word: words1) map1[word]++;
	for(auto& word: words2) map2[word]++;
	for(auto str: map1) 
		if(str.second == 1) myset.insert(str.first);
	for(auto str: map2) 
		if(str.second == 1 && myset.count(str.first) == 1) ans++;
	return ans;
}