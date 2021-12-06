string removeDuplicates(string s) {
	string ans = "";
	for(auto ch: s){
		if(ch != ans.back()) ans.push_back(ch);            
		else ans.pop_back();
	}
	return ans;
}