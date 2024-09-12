string toLowerCase(string s) {
	string lower = "";
	for(int i=0;i<s.length();i++) lower += tolower(s[i]);
	return lower;
}