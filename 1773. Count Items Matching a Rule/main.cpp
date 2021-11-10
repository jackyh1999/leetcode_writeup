int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
	int ans = 0, key;
	if(ruleKey == "type") key = 0;
	else if(ruleKey == "color") key = 1;
	else key = 2;
	for(auto item: items)
		if(item[key] == ruleValue) ans++;
	return ans;
}