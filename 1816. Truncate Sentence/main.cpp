string truncateSentence(string s, int k) {
	for(int i=0;i<s.length();i++){
		if(s[i] == ' ') k--;
		if(k == 0) return s.substr(0,i);
	}
	return s;
}