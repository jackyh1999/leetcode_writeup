string restoreString(string s, vector<int>& indices) {
	string ans = "";
	char shuffle[indices.size()];
	for(int i=0;i<indices.size();i++)
		shuffle[indices[i]] = s[i];
	for(int i=0;i<indices.size();i++)
		ans += shuffle[i];
	return ans;
}