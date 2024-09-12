vector<int> diStringMatch(string s) {
	vector<int> ans;
	int lo = 0, hi = s.length();
	for(int i=0;i<s.length();i++){
		if(s[i] == 'I') ans.push_back(lo++);            
		else ans.push_back(hi--);            
	} 
	ans.push_back(lo);
	return ans;
}