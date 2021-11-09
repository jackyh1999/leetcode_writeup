vector<int> decode(vector<int>& encoded, int first) {
	vector<int> ans;
	for(int i=0;i<encoded.size();i++){
		ans.push_back(first);
		first ^= encoded[i];
	}
	ans.push_back(first);
	return ans;
}