string removeOuterParentheses(string s) {
	string ans = "";
	int start_index = 0, cnt = 0;
	for(int i=0;i<s.length();i++){
		if(s[i]==')') cnt--;
		if(cnt != 0) ans += s[i];
		if(s[i]=='(') cnt++;          
	}
	return ans;
}