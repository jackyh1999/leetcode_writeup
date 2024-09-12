int countGoodSubstrings(string s) {
	int good = 0;
	for(int i=2; i<s.length(); i++)
		if(s[i] != s[i-1] && s[i] != s[i-2] && s[i-1] != s[i-2]) good++;
	return good;
}